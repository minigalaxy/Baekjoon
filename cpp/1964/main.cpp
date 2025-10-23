#include <iostream>

using namespace std;

long long N;

int main()
{
    cin >> N;
    
    cout << ((N - 1) * (4 + 3 * (N - 2)) / 2 + N * 5) % 45678;
    
    return 0;
}
