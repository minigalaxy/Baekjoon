#include <iostream>

using namespace std;

int n, k;

string b;

int c = 0;

int s = 0;

int main()
{
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> b;
        
        if(b == "save") s = c;
        else if(b == "load") c = s;
        else if(b == "shoot") c = max(0, c - 1);
        else c += k;
        
        cout << c << '\n';
    }
    
    return 0;
}
