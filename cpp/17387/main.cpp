#include <iostream>

using namespace std;

long long x[4], y[4];

long long ccw(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3){
    return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

int main()
{
    for(int i = 0; i < 4; i++) cin >> x[i] >> y[i];
    
    if(ccw(x[0], y[0], x[2], y[2], x[1], y[1]) == 0 && ccw(x[0], y[0], x[3], y[3], x[1], y[1]) == 0){
        if(x[0] == x[1]) cout << ((max(y[2], y[3]) >= min(y[0], y[1])) && (min(y[2], y[3]) <= max(y[0], y[1])));
        else cout << ((max(x[2], x[3]) >= min(x[0], x[1])) && (min(x[2], x[3]) <= max(x[0], x[1])));
    } else if(ccw(x[0], y[0], x[2], y[2], x[1], y[1]) == 0){
        cout << (((x[2] >= min(x[0], x[1])) && (x[2] <= max(x[0], x[1]))) && ((y[2] >= min(y[0], y[1])) && (y[2] <= max(y[0], y[1]))));
    } else if(ccw(x[0], y[0], x[3], y[3], x[1], y[1]) == 0){
        cout << (((x[3] >= min(x[0], x[1])) && (x[3] <= max(x[0], x[1]))) && ((y[3] >= min(y[0], y[1])) && (y[3] <= max(y[0], y[1]))));
    } else if(ccw(x[2], y[2], x[0], y[0], x[3], y[3]) == 0){
        cout << (((x[0] >= min(x[2], x[3])) && (x[0] <= max(x[2], x[3]))) && ((y[0] >= min(y[2], y[3])) && (y[0] <= max(y[2], y[3]))));
    } else if(ccw(x[2], y[2], x[1], y[1], x[3], y[3]) == 0){
        cout << (((x[1] >= min(x[2], x[3])) && (x[1] <= max(x[2], x[3]))) && ((y[1] >= min(y[2], y[3])) && (y[1] <= max(y[2], y[3]))));
    } else cout << (((ccw(x[0], y[0], x[2], y[2], x[1], y[1]) > 0) ^ (ccw(x[0], y[0], x[3], y[3], x[1], y[1]) > 0)) && (((ccw(x[2], y[2], x[1], y[1], x[3], y[3]) > 0) ^ (ccw(x[2], y[2], x[0], y[0], x[3], y[3]) > 0))));
    
    return 0;
}
