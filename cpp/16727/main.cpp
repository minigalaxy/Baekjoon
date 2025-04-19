#include <iostream>

using namespace std;

int p[2], s[2];

int main()
{
    cin >> p[0] >> s[0] >> s[1] >> p[1];
    
    if(p[0] + p[1] == s[0] + s[1]){
        if(s[0] == p[1]) cout << "Penalty";
        else cout << ((p[1] > s[0]) ? "Persepolis" : "Esteghlal");
    } else cout << ((p[0] + p[1] > s[0] + s[1]) ? "Persepolis" : "Esteghlal");
    
    return 0;
}
