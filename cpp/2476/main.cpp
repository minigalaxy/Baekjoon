#include <iostream>
#include <algorithm>

using namespace std;

int N;

int d[3];

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> d[0] >> d[1] >> d[2];
        
        if(d[0] == d[1] && d[1] == d[2]) res = max(res, 10000 + d[0] * 1000);
        else if(d[0] == d[1] || d[1] == d[2]) res = max(res, 1000 + d[1] * 100);
        else if(d[0] == d[2]) res = max(res, 1000 + d[0] * 100);
        else res = max(res, *max_element(d, d + 3) * 100);
    }
    
    cout << res;
    
    return 0;
}
