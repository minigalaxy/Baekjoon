#include <iostream>

using namespace std;

int T;

int n;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> n;
        
        for(int j = 0; n > 0; j++){
            if(n & 1) cout << j << ' ';
            n = (n >> 1);
        }
        
        cout << '\n';
    }
    
    return 0;
}
