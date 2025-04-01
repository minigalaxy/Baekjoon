#include <iostream>

using namespace std;

string n;

string res;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n.size(); i++){
        int t = n[i] - '0';
            
        res.push_back(t / 4 + '0');
        t %= 4;
        res.push_back(t / 2 + '0');
        t %= 2;
        res.push_back(t + '0');
    }
    
    for(int i = 0; i < 3; i++){
        if(res[i] != '0'){
            cout << res.substr(i, res.size());
            
            return 0;
        }
    }
    
    cout << 0;
    
    return 0;
}
