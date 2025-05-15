#include <iostream>
#include <stack>

using namespace std;

int N;

int h[80000];

stack<int> S;

long long res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> h[i];
    
    for(int i = 0; i < N; i++){
        while(!S.empty() && h[i] >= h[S.top()]){
            res += i - S.top() - 1;
            S.pop();
        }
        
        S.push(i);
    }
    
    while(!S.empty()){
        res += N - S.top() - 1;
        S.pop();
    }
    
    cout << res;
    
    
    return 0;
}
