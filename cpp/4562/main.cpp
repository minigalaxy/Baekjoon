#include <iostream>

using namespace std;

int n;

int X, Y;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> X >> Y;
        
        if(X >= Y) cout << "MMM BRAINS\n";
        else cout << "NO BRAINS\n";
    }
    
    return 0;
}
