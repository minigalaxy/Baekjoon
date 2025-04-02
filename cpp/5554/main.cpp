#include <iostream>

using namespace std;

int sum = 0;

int main()
{
    for(int i = 0; i < 4; i++){
        int t;
        cin >> t;
        
        sum += t;
    }
    
    cout << sum / 60 << '\n' << sum % 60;
    
    return 0;
}
