#include <iostream>

using namespace std;

int n;

int l;

int main()
{
    cin >> n;
    
    while(true){
        cin >> l;
        
        if(l == 0) break;
        
        cout << l << " is" << (l % n == 0 ? " " : " NOT ") << "a multiple of " << n << '.' << '\n';
    }
    
    return 0;
}
