#include <iostream>

using namespace std;

long long A, B, C;

int main()
{
    cin >> A >> B >> C;
    
    cout << max(A * B / C, A * C / B);
    
    return 0;
}
