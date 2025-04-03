#include <iostream>
#include <string>

using namespace std;

int t;

int n;

string a, b;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        int e[2] = { 0, 0 }, o[2] = { 0, 0 };

        cin >> n;

        cin >> a >> b;

        for(int j = 0; j < a.size(); j += 2){
            if(a[j] == '1') e[0]++;
            if(b[j] == '0') e[1]++;
        }
        for(int j = 1; j < a.size(); j += 2){
            if(a[j] == '1') o[0]++;
            if(b[j] == '0') o[1]++;
        }

        if(o[1] >= e[0] && e[1] >= o[0]) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
