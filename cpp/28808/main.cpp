#include <iostream>

using namespace std;

int n, m;

int g[100][100];

int res = 0;

int main()
{
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) g[i][j] = getchar();
        getchar();
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == '+'){
                res++;
                
                break;
            }
        }
    }
    
    cout << res;
    
    return 0;
}
