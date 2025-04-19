#include <iostream>

using namespace std;

int w, h;

int n, a, b;

int main()
{
    cin >> w >> h;
    
    cin >> n >> a >> b;
    
    if((w / a) * (h / b) == 0) cout << -1;
    else cout << n / ((w / a) * (h / b)) + (n % ((w / a) * (h / b)) > 0);
    
    return 0;
}
