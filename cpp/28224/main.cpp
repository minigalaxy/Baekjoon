#include <iostream>

using namespace std;

int n;

int c;

int p = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> c;
        
        p += c;
    }
    
    cout << p;
    
    return 0;
}
