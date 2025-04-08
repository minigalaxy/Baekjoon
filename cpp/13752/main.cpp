#include <iostream>

using namespace std;

int n;

int k;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> k;
        
        for(int j = 0; j < k; j++) cout << '=';
        cout << '\n';
    }
    
    return 0;
}
