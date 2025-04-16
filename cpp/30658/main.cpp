#include <iostream>

using namespace std;

int n;

int t[100];

int main()
{
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        for(int j = 0; j < n; j++) cin >> t[j];
        
        for(int j = n - 1; j > -1; j--) cout << t[j] << '\n';
        
        cout << "0\n";
    }
    return 0;
}
