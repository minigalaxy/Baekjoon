#include <iostream>

using namespace std;

int T;

int a, b;

int main()
{
    cin >> T;
    
    for(int i = 1; i <= T; i++){
        cin >> a >> b;
        
        cout << "Case " << i << ": " << a + b << '\n';
    }
    
    return 0;
}
