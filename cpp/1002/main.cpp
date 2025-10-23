#include <iostream>

using namespace std;

int T;

int x1, y1, r1, x2, y2, r2;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        int dist_sq = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        
        if(x1 == x2 && y1 == y2){
            if(r1 == r2) cout << -1 << '\n';
            else cout << 0 << '\n';
        } else {
            if(dist_sq == (r1 + r2) * (r1 + r2) || dist_sq == (r1 - r2) * (r1 - r2)) cout << 1 << '\n';
            else if(dist_sq > (r1 - r2) * (r1 - r2) && dist_sq < (r1 + r2) * (r1 + r2)) cout << 2 << '\n';
            else cout << 0 << '\n';
        }
    }
    
    return 0;
}
