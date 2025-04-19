#include <iostream>

using namespace std;

int n;

int b[3] = { 0, 0, 0 };

int main()
{
    cin >> n;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            int t;
            cin >> t;
            
            if(t == 7) b[i] = 1;
        }
    }
    
    cout << ((b[0] + b[1] + b[2] == 3) ? 777 : 0);
    
    return 0;
}
