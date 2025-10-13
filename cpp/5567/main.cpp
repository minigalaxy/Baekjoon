#include <iostream>
#include <vector>

using namespace std;

int n;

int m;

vector<int> f[501];

int res = 0;

int main()
{
    cin >> n;
    cin >> m;
    
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        
        f[a].push_back(b);
        f[b].push_back(a);
    }

    bool visited[501] = { false, true, };
    
    for(int a: f[1]){
        if(!visited[a]){
            visited[a] = true;
            res++;
        }
            
        for(int b: f[a]){
            if(!visited[b]){
                visited[b] = true;
                res++;
            }
        }
    }
    
    cout << res;
    
    return 0;
}
