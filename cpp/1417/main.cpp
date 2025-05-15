#include <iostream>
#include <queue>

using namespace std;

int N;

int p;

priority_queue<int> Q;

int res = 0;

int main()
{
    cin >> N;
    
    cin >> p;
    
    for(int i = 1; i < N; i++){
        int t;
        cin >> t;
        
        Q.push(t);
    }
    
    if(N == 1){
        cout << 0;
        
        return 0;
    }
    
    for(; p <= Q.top(); res++){
        p++;
        
        Q.push(Q.top() - 1);
        Q.pop();
    }
    
    cout << res;
    
    return 0;
}
