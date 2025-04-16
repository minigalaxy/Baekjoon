#include <iostream>

using namespace std;

int n;

double a, b;

int main()
{
    cout.precision(2);
    cout.setf(ios_base::fixed);
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        
        cout << "The height of the triangle is " << 2 * a / b << " units\n";
    }
    
    return 0;
}
