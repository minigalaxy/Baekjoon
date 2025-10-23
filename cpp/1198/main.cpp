#include <iostream>
#include <vector>

using namespace std;

int N;

struct Point
{
    int x, y;
};

Point P[35];

double get_width(int x1, int y1, int x2, int y2, int x3, int y3){
    return double(abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3)) / 2;
}

double res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> P[i].x >> P[i].y;
    
    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1; j < N - 1; j++){
            for(int k = j + 1; k < N; k++){
                res = max(res, get_width(P[i].x, P[i].y, P[j].x, P[j].y, P[k].x, P[k].y));
            }
        }
    }
    
    cout.precision(9);
    cout << fixed;
    
    cout << res;
    
    return 0;
}
