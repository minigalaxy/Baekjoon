#include <iostream>
#include <cmath>

using namespace std;

int T;

int N;

int D[20][2];

double res;

void comb(int p, int n, long long x, long long y){
    if(n == N / 2){
        res = min(res, sqrt(x * x + y * y));
            
        return;
    }
    
    for(int i = p + 1; i < N; i++){
        comb(i, n + 1, x - 2 * D[i][0], y - 2 * D[i][1]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cout.precision(6);
    cout.setf(ios_base::fixed);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        res = 10'000'000;
            
        cin >> N;
    
        for(int j = 0; j < N; j++) cin >> D[j][0] >> D[j][1];
        
        int sx = 0, sy = 0;
        
        for(int j = 0; j < N; j++){
            sx += D[j][0];
            sy += D[j][1];
        }
        
        comb(-1, 0, sx, sy);
        
        cout << res << '\n';
    }
    
    return 0;
}
