#include <iostream>

using namespace std;

int n;

double d, f, p;

int main()
{
    cout.precision(2);
    cout.setf(ios_base::fixed);
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> d >> f >> p;
        
        cout << '$' << d * f * p << '\n';
    }
    
    return 0;
}
