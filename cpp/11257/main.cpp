#include <iostream>

using namespace std;

int N;

int n, s, i, t;

int main()
{
    cin >> N;
    
    for(int j = 0; j < N; j++){
        cin >> n >> s >> i >> t;
        
        cout << n << ' ' <<  s + i + t << ' ' << ((s + i + t >= 55 & s >= 11 && i >= 8 && t >= 12) ? "PASS\n" : "FAIL\n");
    }
    
    return 0;
}
