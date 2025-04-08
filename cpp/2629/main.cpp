#include <iostream>

using namespace std;

int n, m;

int N[30], M[7];

bool mem[31][30001] = { false, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> N[i];
    
    cin >> m;
    
    for(int i = 0; i < m; i++) cin >> M[i];
    
    mem[0][15000] = true;
    
    for(int i = 0; i < m; i++){
        if(M[i] <= 15000){
            for(int j = 1; j <= n; j++){
                for(int k = 0; k <= 30000; k++){
                    mem[j][k] = mem[j - 1][k];
                    if(k + N[j - 1] <= 30000) mem[j][k] = (mem[j][k] || mem[j - 1][k + N[j - 1]]);
                    if(k - N[j - 1] >= 0) mem[j][k] = (mem[j][k] || mem[j - 1][k - N[j - 1]]);
                }
            }
            
            cout << ((mem[n][M[i] + 15000]) ? "Y " : "N ");
        } else cout << "N ";
    }
    
    return 0;
}
