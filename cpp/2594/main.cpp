#include <iostream>
#include <queue>

using namespace std;

int N;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> S;

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int s, e;
        cin >> s >> e;

        S.push({ s / 100 * 60 + s % 100 - 10, e / 100 * 60 + e % 100 + 10 });
    }

    int c = 600;

    while(!S.empty()){
        if(S.top().first > c){
            res = max(res, S.top().first - c);
            c = S.top().second;
        }
        else if(S.top().second > c) c = S.top().second;

        S.pop();
    }

    res = max(res, 1320 - c);

    cout << res;

    return 0;
}
