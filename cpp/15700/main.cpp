#include <iostream>

using namespace std;

long long N, M;

int main()
{
    cin >> N >> M;
    
    cout << (N / 2) * M + (N % 2) * (M / 2);
    
    return 0;
}
