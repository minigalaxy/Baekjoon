#include <iostream>

using namespace std;

long long N, M, S;

int main()
{
    cin >> N >> M >> S;
    
    cout << min(M * S * 100, (M + 1) * S * (100 -  N)) / 100;
    
    return 0;
}
