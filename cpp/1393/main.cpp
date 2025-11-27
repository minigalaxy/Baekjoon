#include <iostream>

using namespace std;

int xs, ys;

int xe, ye, dx, dy;

int res[3] = { 0, 0, 200 * 200 + 200 * 200 };

int lcd(int a, int b){
    while(b){
        int t = a % b;
        a = b;
        b = t;
    }
    
    return a;
}

int main()
{
    cin >> xs >> ys;
    
    cin >> xe >> ye >> dx >> dy;
    
    int l = lcd(dx, dy);
    
    dx /= l;
    dy /= l;
    
    while(true){
        int d = (xs - xe) * (xs - xe) + (ys - ye) * (ys - ye);
        
        if(d < res[2]){
            res[0] = xe;
            res[1] = ye;
            res[2] = d;
        }
        else break;
        
        xe += dx;
        ye += dy;
    }
    
    cout << res[0] << ' ' << res[1];
    
    return 0;
}
