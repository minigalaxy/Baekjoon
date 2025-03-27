#include <iostream>

using namespace std;

int T;

int y, m;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> y >> m;
        
        if(m > 1){
            if(m == 3){
                if(y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) cout << y << " 2 29\n";
                else cout << y << " 2 28\n";
            }
            else if(m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11) cout << y << ' ' << m - 1 << " 31\n";
            else cout << y << ' ' << m - 1 << " 30\n";
        } else cout << y - 1 << ' ' << "12 31\n";
    }
    
    return 0;
}
