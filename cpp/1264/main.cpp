#include <iostream>

using namespace std;

string s;

int main()
{
    while(true){
        int cnt = 0;

        getline(cin, s);

        if(s == "#") break;

        for(char c : s){
            if(c < 97) c += 32;
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
