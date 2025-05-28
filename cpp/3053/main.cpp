#include <iostream>

using namespace std;

double R;

int main()
{
    cin >> R;
    
    cout.precision(6);
    cout.setf(ios_base::fixed);
    
    cout << R * R * 3.141592653589793238 << '\n' << 2 * R * R;
    
    return 0;
}
