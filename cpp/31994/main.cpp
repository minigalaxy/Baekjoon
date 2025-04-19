#include <iostream>

using namespace std;

string t, s;

int n, res = 0;

int main()
{
    for(int i = 0; i < 7; i++){
        cin >> t >> n;
        
        if(n > res){
            res = n;
            s = t;
        }
    }
    
    cout << s;
    
    return 0;
}
