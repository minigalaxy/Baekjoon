#include <iostream>

using namespace std;

int T;

int t;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> t;
        
        cout << (t % 25 < 17 ? "ONLINE" : "OFFLINE") << '\n';
    }
    
    return 0;
}
