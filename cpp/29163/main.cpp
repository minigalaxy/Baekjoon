#include <iostream>

using namespace std;

int n;

int a;

int o = 0, e = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        if(a % 2 == 0) e++;
        else o++;
    }
    
    if(e > o) cout << "Happy";
    else cout << "Sad";
    
    return 0;
}
