#include <iostream>
#include <queue>

using namespace std;

int T;

int N, M;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        priority_queue<int, vector<int>, greater<int>> a, b;
    
        cin >> N >> M;
        
        for(int j = 0; j < N; j++){
            int t;
            cin >> t;
            
            a.push(t);
        }
        for(int j = 0; j < M; j++){
            int t;
            cin >> t;
            
            b.push(t);
        }
        
        while(!a.empty() && !b.empty()){
            if(a.top() < b.top()) a.pop();
            else b.pop();
        }
        
        cout << ((a.empty()) ? "B\n" : "S\n");
    }
    
    return 0;
}
