#include <iostream>

using namespace std;

string s;

int x;

int res = 0;

int main()
{
    for(int i = 0; i < 4; i++){
        cin >> s >> x;
        
        if(s == "Stair") res += x * 17;
        else res += x * 21;
    }
    
    cout << res;
    
    return 0;
}
