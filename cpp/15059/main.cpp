#include <iostream>

using namespace std;

int C[2], B[2], P[2];

int main()
{
    for(int i = 0; i < 2; i++) cin >> C[i] >> B[i] >> P[i];
    
    cout << max(0, C[1] - C[0]) + max(0, B[1] - B[0]) + max(0, P[1] - P[0]);
    
    return 0;
}
