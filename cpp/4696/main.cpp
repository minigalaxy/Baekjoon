#include <iostream>

using namespace std;

double n;

int main()
{
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        cout.precision(2);
        cout << fixed;
        
        cout << n * n * n * n + n * n * n + n * n + n + 1 << '\n';
    }
    return 0;
}
