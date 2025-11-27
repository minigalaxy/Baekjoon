#include <iostream>

using namespace std;

int n;

long long F[91] = { 0, 1 };

int main()
{
    cin >> n;
    
    for(int i = 2; i <= n; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
    
    cout << F[n];
    
    return 0;
}
