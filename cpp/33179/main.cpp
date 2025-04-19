#include <iostream>

using namespace std;

int n;

int p;

int res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> p;
        
        res += p / 2 + (p % 2 > 0);
    }
    
    cout << res;
    
    return 0;
}
