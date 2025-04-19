#include <iostream>

using namespace std;

int l, h;

int n;

int c;

int main()
{
    cin >> l >> h >> n;
    
    for(int i = 0; i < n; i++){
        cin >> c;
        
        cout << c << ' ' << l * min(1000, c) + h * max(0, c - 1000) << '\n';
    }
    
    return 0;
}
