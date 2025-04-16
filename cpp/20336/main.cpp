#include <iostream>

using namespace std;

int n;

int d;

string m;

int main()
{
    cin >> n;
    
    cin >> d;
    
    cout << d << '\n';
    
    for(int i = 0; i < d; i++){
        cin >> m;
    
        cout << m << '\n';
    }
    
    for(int i = 1; i < n; i++){
        cin >> d;
        
        for(int j = 0; j < d; j++) cin >> m;
    }
    
    return 0;
}
