#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;

int d, w;

vector<int> assignment[1001];

priority_queue<int> score;

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> d >> w;

        assignment[d].push_back(w);
    }

    for(int i = 1000; i > 0; i--){
        for(int a: assignment[i]){
            score.push(a);
        }

        if(!score.empty()){
            res += score.top();

            score.pop();
        }
    }

    cout << res;

    return 0;
}
