#include <iostream>

using namespace std;

int W, H, X, Y, P;

int x, y;

int res = 0;

int main()
{
    cin >> W >> H >> X >> Y >> P;
    
    for(int i = 0; i < P; i++){
        cin >> x >> y;
        
        x -= X;
        y -= Y;
        
        if(0 <= x && x <= W && 0 <= y && y <= H) res++;
        else if(x * x + (H / 2 - y) * (H / 2 - y) <= H * H / 4 || (W - x) * (W - x) + (H / 2 - y) * (H / 2 - y) <= H * H / 4) res++;
    }
    
    cout << res;
    
    return 0;
}
