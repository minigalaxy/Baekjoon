#include <iostream>

using namespace std;

int T;

string c;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> c;
        
        cout << (c.size() == 7 && c[0] == c[1] && c[2] == c[3] && c[1] == c[4] && c[3] == c[5] && c[5] == c[6] && c[1] != c[2]) << '\n';
    }
    
    return 0;
}
