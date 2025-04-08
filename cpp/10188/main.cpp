#include <iostream>

using namespace std;

int T;

int x, y;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> x >> y;
        
        for(int j = 0; j < y; j++){
            for(int k = 0; k < x; k++) cout << 'X';
            cout << '\n';
        }
        
        cout << '\n';
    }
    
    return 0;
}
