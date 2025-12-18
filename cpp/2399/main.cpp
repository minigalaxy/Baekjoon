#include <iostream>

using namespace std;

int n;

int x[10'000];

long long res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> x[i];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res += abs(x[i] - x[j]);
        }
    }
    
    cout << res;
    
    return 0;
}
