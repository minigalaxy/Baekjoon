#include <iostream>

using namespace std;

string n[5] = {
"0000    1 2222 3333 4  4 5555 6666 7777 8888 9999",
"0  0    1    2    3 4  4 5    6       7 8  8 9  9",
"0  0    1 2222 3333 4444 5555 6666    7 8888 9999",
"0  0    1 2       3    4    5 6  6    7 8  8    9",
"0000    1 2222 3333    4 5555 6666    7 8888    9"
};

string s;

int main()
{
    cin >> s;
    
    for(char c: s){
        for(int i = 0; i < 5; i++){
            if(n[i][(c - '0') * 5 + 3] != ' ') cout << n[i].substr((c - '0') * 5, 4) << '\n';
            else cout << n[i].substr((c - '0') * 5, 1) << '\n';
        }
        
        cout << '\n';
    }
    
    return 0;
}
