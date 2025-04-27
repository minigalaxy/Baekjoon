#include <iostream>

using namespace std;

int n;

int a, b, c;

int main()
{
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> a >> b >> c;
        
        cout << "Scenario #" << i << ":\n" << ((2 * max(a, max(b, c)) * max(a, max(b, c)) == a * a + b * b + c * c) ? "yes" : "no") << "\n\n";
    }
    
    return 0;
}
