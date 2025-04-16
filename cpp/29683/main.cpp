#include <iostream>

using namespace std;

int n;

int A;

int a;

int res = 0;

int main()
{
    cin >> n >> A;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        res += a / A;
    }
    
    cout << res;
    
    return 0;
}
