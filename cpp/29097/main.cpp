#include <iostream>

using namespace std;

int n, m, k, a, b, c;

int main()
{
    cin >> n >> m >> k >> a >> b >> c;
    
    if(a * n >= b * m && a * n >= c * k) cout << "Joffrey ";
    if(b * m >= a * n && b * m >= c * k) cout << "Robb ";
    if(c * k >= a * n && c * k >= b * m) cout << "Stannis";
    
    return 0;
}
