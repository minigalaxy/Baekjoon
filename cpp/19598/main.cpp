#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N;

pair<int, int> ST[100000];

priority_queue<int, vector<int>, greater<int>> ongoing;

int res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++) cin >> ST[i].first >> ST[i].second;

    sort(ST, ST + N);

    int tmp = 1;

    ongoing.push(ST[0].second);

    for(int i = 1; i < N; i++){
        while(!ongoing.empty() && ongoing.top() <= ST[i].first){
            ongoing.pop();

            tmp--;
        }

        ongoing.push(ST[i].second);

        tmp++;

        res = max(res, tmp);
    }

    cout << res;

    return 0;
}
