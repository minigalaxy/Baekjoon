#include <iostream>

using namespace std;

string a, b;

int main()
{
    cin >> a >> b;
    
    for(int i = 0; i < a.size(); i++) cout << max(a[i], b[i]);
    
    return 0;
}
