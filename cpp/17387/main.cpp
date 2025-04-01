#include <iostream>

using namespace std;

long long x[4], y[4];

long long ccw(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3){
    long long t = (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
    cout << t;
    return t;
}

int main()
{
    for(int i = 0; i < 4; i++) cin >> x[i] >> y[i];
    
    if(ccw(x[0], y[0], x[2], y[2], x[1], y[1]) == 0 || ccw(x[0], y[0], x[3], y[3], x[1], y[1]) == 0){
        if(ccw(x[2], y[2], x[0], y[0], x[3], y[3]) == 0)
    } else if((ccw(x[0], y[0], x[2], y[2], x[1], y[1]) < 0) ^ (ccw(x[0], y[0], x[3], y[3], x[1], y[1]) < 0)){
        if(ccw(x[0], y[0], x[2], y[2], x[1], y[1]) > 0) cout << (ccw(x[2], y[2], x[1], y[1], x[3], y[3]) > 0);
        else cout << (ccw(x[2], y[2], x[1], y[1], x[3], y[3]) < 0);
    } else cout << 0;
    
    return 0;
}
