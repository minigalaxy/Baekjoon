#include <iostream>

using namespace std;

int c, h;

string t;

bool b[86400] = { false, };

int res = 0;

int main()
{
    cin >> c >> h;
    
    for(int i = 0; i < c + h; i++){
        cin >> t;
        
        int s = stoi(t.substr(0, 2)) * 3600 + stoi(t.substr(3, 2)) * 60 + stoi(t.substr(6, 2));
        
        fill(b + s, b + s + 40, true);
    }
    
    for(int i = 0; i < 86400; i++){
        if(!b[i]) res++;
    }
    
    cout << res;
    
    return 0;
}
