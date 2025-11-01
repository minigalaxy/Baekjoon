#include <iostream>
#include <queue>

using namespace std;

int N;

int n[10'000];

int a, b;

queue<int> visit;
bool visited[10'000] = { false, };

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> n[i];
    
    cin >> a >> b;
    
    visit.push(a - 1);
    
    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            int v = visit.front();
            visit.pop();
            
            if(v == b - 1){
                cout << res;
                
                return 0;
            }
            
            for(int j = v; j < N; j += n[v]){
                if(!visited[j]){
                    visit.push(j);
                    visited[j] = true;
                }
            }
            for(int j = v; j >= 0; j -= n[v]){
                if(!visited[j]){
                    visit.push(j);
                    visited[j] = true;
                }
            }
        }
        
        res++;
    }
    
    cout << -1;
    
    return 0;
}
