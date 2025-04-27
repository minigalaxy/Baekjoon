#include <iostream>

using namespace std;

int t[3];

int n = 2;

int main()
{
    cin >> t[0] >> t[1];
    
    while(t[0] >= t[1]){
        t[2] = t[0] - t[1];
        t[0] = t[1];
        t[1] = t[2];
        
        n++;
    }
    
    cout << n;
    
    return 0;
}
