#include <iostream>
#include <algorithm>

using namespace std;

int n, a, b;

int s, t;

int main()
{
    cin >> n >> a >> b >> s >> t;
    
    if(s > t) swap(s, t);
    
    if(s > a && t < b) cout << "City";
    else if(s >= b || t <= a) cout << "Outside";
    else cout << "Full";
    
    return 0;
}
