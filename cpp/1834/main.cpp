#include <iostream>

using namespace std;

long long N;

long long res = 0;

int main()
{
    cin >> N;
    
    for(int i = 1; i < N; i++) res += N * i + i;
    
    cout << res;
    
    return 0;
}
