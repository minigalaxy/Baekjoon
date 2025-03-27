#include <iostream>

using namespace std;

int N;

int f[50];

int c;

long long res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> f[i];
    }
    
    cin >> c;
    
    for(int i = 0; i < N; i++){
        res += f[i] / c + (f[i] % c > 0);
    }
    
    cout << res * c;
    
    return 0;
}
