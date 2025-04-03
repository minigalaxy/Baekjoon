#include <iostream>
#include <stack>

using namespace std;

int n, m;

stack<int> e;
bool b[200001] = { false, };

int main()
{
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        
        e.push(t);
    }
    
    while(!e.empty()){
        if(!b[e.top()]){
            cout << e.top() << '\n';
            b[e.top()] = true;
        }
        e.pop();
    }
    
    for(int i = 1; i <= n; i++){
        if(!b[i]) cout << i << '\n';
    }
    
    return 0;
}
