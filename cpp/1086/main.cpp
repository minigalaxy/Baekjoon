#include <iostream>

using namespace std;

int N;

string A[15];
int B[15] = { 0, };

int K;

long long p, q = 1;

int d[1000] = { 1, };

long long m[32768][100] = { 0, };

long long solve(int v, int c, int l){
    if(v == (1 << N) - 1) return (c == 0);
    
    if(m[v][c] == -1){
        m[v][c] = 0;
            
        for(int i = 0; i < N; i++){
            if(!(v & (1 << i))){
                m[v][c] += solve(v | (1 << i), (c + B[i] * d[l]) % K, l + A[i].size());
            }
        }
    }
    
    return m[v][c];
}

long long gcd(long long x, long long y){
    while(y){
        long long tmp = y;
        y = x % y;
        x = tmp;
    }
    
    return x;
}

int main()
{
    fill(m[0], m[32768], -1);
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A[i];
        
        q *= i + 1;
    }
    
    cin >> K;
    
    for(int i = 0; i < N; i++){
        int t = 1;
            
        for(int j = A[i].size() - 1; j >= 0; j--){
            B[i] += (((A[i][j] - '0') % K) * t) % K;
            B[i] %= K;
            t *= 10;
            t %= K;
        }
    }
    
    for(int i = 1; i < 1000; i++){
        d[i] = (d[i - 1] * 10) % K;
    }
    
    p = solve(0, 0, 0);
    
    if(p == 0) cout << "0/1";
    else {
        long long g = gcd(p, q);
    
        cout << p / g << '/' << q / g;
    }
    
    return 0;
}
