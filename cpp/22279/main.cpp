#include <iostream>

using namespace std;

int N;

double q, y;

double res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> q >> y;
        
        res += q * y;
    }
    
    cout << res;
    
    return 0;
}
