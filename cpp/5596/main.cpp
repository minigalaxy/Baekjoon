#include <iostream>

using namespace std;

int S, T;

int main()
{
    for(int i = 0; i < 4; i++){
        int t;
        cin >> t;
        
        S += t;
    }
    for(int i = 0; i < 4; i++){
        int t;
        cin >> t;
        
        T += t;
    }
    
    cout << max(S, T);
    return 0;
}
