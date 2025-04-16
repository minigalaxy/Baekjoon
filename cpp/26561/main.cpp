#include <iostream>

using namespace std;

int n;

int p, t;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> p >> t;
        
        cout << p + t / 4 - t / 7 << '\n';
    }
    
    return 0;
}
