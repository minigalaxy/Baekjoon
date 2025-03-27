#include <iostream>

using namespace std;

long long n;

int main()
{
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        cout << ((n % 42 == 0) ? "PREMIADO" : "TENTE NOVAMENTE") << '\n';
    }
    
    return 0;
}
