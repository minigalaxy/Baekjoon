#include <iostream>

using namespace std;

string s;

int a, w;

int main()
{
    while(true){
        cin >> s >> a >> w;

        if(s == "#") break;

        if(a > 17 || w >= 80) cout << s << " Senior\n";
        else cout << s << " Junior\n";
    }

    return 0;
}
