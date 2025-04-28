#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;

int d, p;

vector<int> lecture[10001];

priority_queue<int> money;

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> p >> d;

        lecture[d].push_back(p);
    }

    for(int i = 10000; i > 0; i--){
        for(int a: lecture[i]){
            money.push(a);
        }

        if(!money.empty()){
            res += money.top();

            money.pop();
        }
    }

    cout << res;

    return 0;
}
