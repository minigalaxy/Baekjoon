#include <iostream>

using namespace std;

int TC;

string f, l;

int main()
{
    cin >> TC;
    
    for(int i = 0; i < TC; i++){
        cin >> l >> f;
        
        cout << "Case " << i + 1 << ": " << f << ", " << l << '\n';
    }
    
    return 0;
}
