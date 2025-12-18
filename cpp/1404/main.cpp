#include <iostream>

using namespace std;

double p[8][8];

double s[8][4] = { 0, };

void solve(int d, int l, int r){
    if(d > 0){
        int m = (l + r) / 2;
        
        solve(d - 1, l, m);
        solve(d - 1, m + 1, r);
        
        for(int i = l; i <= m; i++){
            for(int j = m + 1; j <= r; j++){
                s[i][d] += p[i][j] * s[i][d - 1] * s[j][d - 1];
                s[j][d] += p[j][i] * s[i][d - 1] * s[j][d - 1];
            }
        }
        
        
    }
    
}

int main()
{
    for(int i = 0; i < 7; i++){
        for(int j = i + 1; j < 8; j++){
            cin >> p[i][j];
            
            p[i][j] /= 100;
            p[j][i] = 1 - p[i][j];
        }
    }
    
    for(int i = 0; i < 8; i++) s[i][0] = 1;
    
    solve(3, 0, 7);
    
    cout.precision(9);
    cout.setf(ios_base::fixed);
    
    for(int i = 0; i < 8; i++) cout << s[i][3] << ' ';
    
    return 0;
}
