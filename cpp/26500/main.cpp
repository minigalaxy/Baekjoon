#include <iostream>

using namespace std;

int n;

double a, b;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        
        cout.precision(1);
        cout << fixed;
        
        cout << abs(a - b) << '\n';
    }
    
    return 0;
}
