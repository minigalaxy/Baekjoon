#include <iostream>
#include <stack>

using namespace std;

int K;
stack<int> ledger;

int r = 0;

int main()
{
    cin >> K;

    for(int i = 0; i < K; i++){
        int t;
        cin >> t;

        if(t == 0) ledger.pop();
        else ledger.push(t);
    }

    while(!ledger.empty()){
        r += ledger.top();
        ledger.pop();
    }

    cout << r;

    return 0;
}
