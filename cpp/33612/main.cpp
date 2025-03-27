#include <iostream>

using namespace std;

int N;

int y = 2024, m = 7;

int main()
{
    cin >> N;
    
    cout << y + (m + 7 * (N - 1)) / 12 << ' ' << (m + 7 * (N - 1)) % 12 + 1;
    
    return 0;
}
