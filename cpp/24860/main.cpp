#include <iostream>

using namespace std;

long long V[3], D, J[3];

int main()
{
    cin >> V[0] >> J[0] >> V[1] >> J[1] >> V[2] >> D >> J[2];
    
    cout << V[2] * D * J[2] * (V[0] * J[0] + V[1] *  J[1]);
    
    return 0;
}
