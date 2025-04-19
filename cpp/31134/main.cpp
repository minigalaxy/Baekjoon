#include <iostream>

using namespace std;

int T;

long long x;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> x;
        
        cout << (x - 1) * 2 + 1 << '\n';
    }
    
    return 0;
}
