#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;

int d, c;

vector<int> assignment[200001];

priority_queue<int> cupramen;

int res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> d >> c;

        assignment[d].push_back(c);
    }

    for(int i = 200000; i > 0; i--){
        for(int a: assignment[i]){
            cupramen.push(a);
        }

        if(!cupramen.empty()){
            res += cupramen.top();

            cupramen.pop();
        }
    }

    cout << res;

    return 0;
}
