#include <iostream>

using namespace std;

int T;

int x1, y1, x2, y2;

int n;

int cx, cy, r;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        
        cin >> n;
        
        int res = 0;
        
        for(int j = 0; j < n; j++){
            cin >> cx >> cy >> r;
            
            int d1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
            int d2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
            
            if(d1 < r * r ^ d2 < r * r) res++;
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
