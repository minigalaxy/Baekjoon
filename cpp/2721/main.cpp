#include <iostream>

using namespace std;

int T;

int n;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> n;
        
        int sum = 0;
        
        for(int k = 1; k <= n; k++) sum += k * (k + 1) * (k + 2) / 2;
        
        cout << sum << '\n';
    }
    
    return 0;
}
