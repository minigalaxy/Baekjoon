#include <iostream>

using namespace std;

int N;

long long res = 0;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++) res += i * i * i;
    
    cout << res;
    
    return 0;
}
