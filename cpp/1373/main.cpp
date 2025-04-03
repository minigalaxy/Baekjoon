#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string n;

string res;

int main()
{
    cin >> n;
    
    reverse(n.begin(), n.end());
    
    for(int i = 0; i < n.size(); i += 3){
        int t = 0;
        
        for(int j = 0, d = 1; j < 3 && i + j < n.size(); j++){
            t += (n[i + j] - '0') * d;
            d *= 2;
        }
        
        res.push_back(t + '0');
    }
    
    reverse(res.begin(), res.end());
    
    cout << res;
    
    return 0;
}
