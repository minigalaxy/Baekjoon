#include <iostream>
#include <cmath>

using namespace std;

int T;

long long N;

int res;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        res = N * N / 2;
        
        cout << res << '\n';
    }
    
    return 0;
}
