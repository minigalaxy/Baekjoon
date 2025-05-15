#include <iostream>
#include <stack>

using namespace std;

int N;

int T[500000];

stack<int> S;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> T[i];
    
    for(int i = 0; i < N; i++){
        while(!S.empty() && T[i] > T[S.top() - 1]) S.pop();
        
        if(S.empty()) cout << "0 ";
        else cout << S.top() << ' ';
        
        S.push(i + 1);
    }
    
    return 0;
}
