#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string n, m;

bool cmp_l(string a, string b){
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    while(a.size() > b.size()){
        b.push_back('0');
    }
    while(a.size() < b.size()){
        a.push_back('0');
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]) return true;
        else if(a[i] < b[i]) return false;
    }

    return true;
}

string sub_l(string a, string b){
    string c;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    while(a.size() > b.size()) b.push_back('0');

    int carry = 0;

    for(int i = 0; i < a.size(); i++){
        int now = a[i] - '0' - b[i] + '0' - carry;

        if(now < 0){
            now += 10;
            carry = 1;
        } else carry = 0;

        c.push_back(now + '0');
    }

    for(int i = c.size() - 1; i > 0; i--){
        if(c[i] == '0') c.pop_back();
        else break;
    }

    reverse(c.begin(), c.end());

    return c;
}

void div_l(string a, string b){
    string res;
    int d = a.size() - b.size();

    for(int i = 0; i < d; i++) b.push_back('0');

    for(int i = 0; i < d + 1; i++){
        int t = 0;

        while(cmp_l(a, b)){
            t++;
            a = sub_l(a, b);
        }

        res.push_back(t + '0');
        b.pop_back();
    }

    for(int i = 0; i < res.size(); i++){
        if(res[i] != '0'){
            res = res.substr(i, res.size());
            break;
        }
    }

    if(res.empty()) res = "0";

    cout << res << '\n' << a;
}

int main()
{
    cin >> n >> m;

    div_l(n, m);

    return 0;
}
