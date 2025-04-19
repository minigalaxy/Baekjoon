#include <iostream>

using namespace std;

int N;

int T;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> T;
        
        res += T;
    }
    
    res += (N - 1) * 8;
    
    cout << res / 24 << ' ' << res % 24;
    
    return 0;
}
