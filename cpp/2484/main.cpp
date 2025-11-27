#include <iostream>
#include <algorithm>

using namespace std;

int N;

int d[4];

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 4; j++) cin >> d[j];
        
        sort(d, d + 4);
        
        if(d[0] == d[1] && d[1] == d[2] && d[2] == d[3]) res = max(res, 50'000 + d[0] * 5'000);
        else if(d[1] == d[2] && (d[0] == d[1] || d[2] == d[3]))  res = max(res, 10'000 + d[1] * 1'000);
        else if(d[0] == d[1] && d[2] == d[3]) res = max(res, 2'000 + d[0] * 500 + d[2] * 500);
        else if(d[0] == d[1] || d[1] == d[2]) res = max(res, 1'000 + d[1] * 100);
        else if(d[2] == d[3]) res = max(res, 1'000 + d[2] * 100);
        else res = max(res, d[3] * 100);
    }
    
    cout << res;
    
    return 0;
}
