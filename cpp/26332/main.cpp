#include <iostream>

using namespace std;

int n;

int c, p;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> c >> p;
        
        cout << c << ' ' << p << '\n' << c * p - 2 * (c - 1) << '\n';
    }
    
    return 0;
}
