#include <iostream>
#include <queue>

using namespace std;

int N, a, b;

bool visited[1'000'001] = { false, };

queue<int> Q;

int main()
{
    cin >> N >> a >> b;
    
    if(N == 0){
        cout << 0;
        
        return 0;
    }
    
    Q.push(N);
    visited[N] = true;
    
    if(N - a >= 0){
        Q.push(N - a);
        visited[N - a] = true;
    }
    
    if(N - b >= 0){
        Q.push(N - b);
        visited[N - b] = true;
    }
    
    int t = 1;
    
    while(true){
        for(int i = Q.size(); i > 0; i--){
            int n = Q.front();
            Q.pop();
            
            if(n == 0 || --n == 0){
                cout << t;
                
                return 0;
            }
            
            if(n - a >= 0 && !visited[n - a]){
                Q.push(n - a);
                visited[n - a] = true;
            }
            
            if(n - b >= 0 && !visited[n - b]){
                Q.push(n - b);
                visited[n - b] = true;
            }
            
            Q.push(n);
            visited[n] = true;
        }
        
        t++;
    }
    
    return 0;
}
