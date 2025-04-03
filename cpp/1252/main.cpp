#include <iostream>
#include <algorithm>

using namespace std;

string a, b;

string res;

int main()
{
    cin >> a >> b;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    while(a.size() < b.size()) a.push_back('0');
    while(a.size() > b.size()) b.push_back('0');
    
    int carry = 0;
    
    for(int i = 0; i < a.size(); i++){
        int now = a[i] - '0' + b[i] - '0' + carry;
            
        res.push_back(now % 2 + '0');
        carry = now / 2;
    }
    
    if(carry == 1) res.push_back('1');
    
    while(res.back() == '0') res.pop_back();
    
    reverse(res.begin(), res.end());
    
    if(res.empty()) cout << '0';
    else cout << res;
    
    return 0;
}
