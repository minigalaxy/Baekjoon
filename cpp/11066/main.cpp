#include <iostream>

using namespace std;

int T;

int K;

int m[500][500][2];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        fill(m[0][0], m[500][0], 500000000);
            
        cin >> K;
        
        for(int j = 0; j < K; j++){
            cin >> m[j][j][0];
            m[j][j][1] = 0;
        }
        
        for(int l = 1; l < K; l++){
            for(int s = 0; s < K - l; s++){
                for(int k = s; k < s + l; k++){
                    if(m[s][s + l][1] > m[s][k][1] + m[k + 1][s + l][1] + m[s][k][0] + m[k + 1][s + l][0]){
                        m[s][s + l][0] = m[s][k][0] + m[k + 1][s + l][0];
                        m[s][s + l][1] = m[s][k][1] + m[k + 1][s + l][1] + m[s][s + l][0];
                    }
                }
            }
        }
        
        cout << m[0][K - 1][1] << '\n';
    }
    
    return 0;
}
