#include <iostream>
#include <algorithm>

using namespace std;

int N;

struct platform
{
    int Y, X1, X2;
    
    bool operator<(const platform &cmp) const {
        return (Y < cmp.Y);
    }
};

platform P[100];

int h[10000] = { 0, };

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int Y, X1, X2;
        cin >> Y >> X1 >> X2;
        
        P[i] = { Y, X1, X2 };
    }
    
    sort(P, P + N);
    
    for(int i = 0; i < N; i++){
        res += P[i].Y - h[P[i].X1] + P[i].Y - h[P[i].X2 - 1];
        
        fill(h + P[i].X1, h + P[i].X2, P[i].Y);
    }
    
    cout << res;
    
    return 0;
}
