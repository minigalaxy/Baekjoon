#include <iostream>

using namespace std;

double d, t;
int r;

int i = 1;

const double PI = 3.1415927;

int main()
{
    cout.precision(2);
    cout.setf(ios_base::fixed);
    
    while(true){
        cin >> d >> r >> t;
        
        if(r == 0) break;
        
        cout << "Trip #" << i << ": " << d * PI * r / 12 / 5280 << ' ' << 3600 * d * PI * r / 12 / 5280 / t << '\n';
    
        i++;
    }
    
    return 0;
}
