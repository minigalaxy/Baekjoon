#include <iostream>

using namespace std;

int N, R1, C1, R2, C2;

int main()
{
    cin >> N >> R1 >> C1 >> R2 >> C2;
    
    for(int y = R1; y <= R2; y++){
        for(int x = C1; x <= C2; x++){
            int rx = x % (2 * N - 1), ry = y % (2 * N - 1);
            
            if(abs(N - 1 - rx) + abs(N - 1 - ry) >= N) cout << '.';
            else cout << char('a' + (abs(N - 1 - rx) + abs(N - 1 - ry)) % 26);
        }
        
        cout << '\n';
    }
    
    return 0;
}
