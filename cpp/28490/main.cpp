#include <iostream>

using namespace std;

int n;

int h, w;

int res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> h >> w;
        
        res = max(res, h * w);
    }
    
    cout << res;
    
    return 0;
}
