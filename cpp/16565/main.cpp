#include <iostream>

using namespace std;

int N;

int m[52][52];

int res = 0;

const int R = 10007;

int comb(int n, int r){
    if(r == n || r == 0) return 1;
    
    if(m[n][r] == -1){
        m[n][r] = (comb(n - 1, r - 1) + comb(n - 1, r)) % 10007;
    }
    
    return m[n][r];
}

int main()
{
    fill(m[0], m[52], -1);
    
    cin >> N;   
    
    for(int i = 1; i <= N / 4; i++){
        if(i % 2 == 1){
            res += (comb(13, i) * comb(52 - i * 4, N - i * 4)) % R;
            res %= R;
        } else {
            res -= (comb(13, i) * comb(52 - i * 4, N - i * 4)) % R;
            res += R;
            res %= R;
        }
    }
    
    cout << res;
    
    return 0;
}
