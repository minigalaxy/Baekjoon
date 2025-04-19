#include <iostream>

using namespace std;

int d[2];

int main()
{
    cin >> d[0] >> d[1];
    
    cout << d[0] * d[1] / (5 * 4840) + ((d[0] * d[1]) % (5 * 4840) > 0);
    
    return 0;
}
