#include <iostream>

using namespace std;

int s = 0;

int main()
{
    for(int i = 0; i < 5; i++){
        int t;
        cin >> t;
        
        s += max(40, t);
    }
    
    cout << s / 5;
   
    return 0;
}
