#include <iostream>

using namespace std;

int N;

int a, d, g;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> a >> d >> g;
        
        if(a == d + g) res = max(res, 2 * a * (d + g));
        else res = max(res, a * (d + g));
    }
    
    cout << res;
    
    return 0;
}
