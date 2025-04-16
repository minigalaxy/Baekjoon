#include <iostream>

using namespace std;

string n;

int main()
{
    cin >> n;
    
    int i = 1;
    string t;
    
    while(t.size() < n.size()){
        t += to_string(i);
        i++;
    }
    
    if(t != n) cout << -1;
    else cout << i - 1;
    
    return 0;
}
