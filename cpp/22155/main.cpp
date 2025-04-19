#include <iostream>

using namespace std;

int n;

int i, f;

int main()
{
    cin >> n;
    
    for(int j = 0; j < n; j++){
        cin >> i >> f;
        
        cout << (((i <= 2 && f <= 1) || (i <= 1 && f <= 2)) ? "Yes\n" : "No\n");
    }
    
    return 0;
}
