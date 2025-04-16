#include <iostream>

using namespace std;

int T;

int a, b, c;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> a >> b >> c;
        
        cout << min(a, min(b, c)) << '\n';
    }
    
    return 0;
}
