#include <iostream>

using namespace std;

int total;

int sum = 0;

int main()
{
    cin >> total;
    
    for(int i = 0; i < 9; i++){
        int t;
        cin >> t;
        
        sum += t;
    }
    
    cout << total - sum;
    
    return 0;
}
