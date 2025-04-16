#include <iostream>

using namespace std;

int n;

bool i[1000];

int x, y;

int res = 0;

int main()
{
    cin >> n;
    
    for(int j = 0; j < n; j++) cin >> i[j];
    
    for(int j = 0; j < n; j++){
        cin >> x >> y;
            
        if(i[j]) res += max(0, y - x);
    }
    
    cout << res;
    
    return 0;
}
