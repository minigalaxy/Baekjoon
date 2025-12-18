#include <iostream>
#include <algorithm>

using namespace std;

int n;

int h[1000];

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> h[i];
    
    if(*min_element(h, h + n) < 48) cout << "False";
    else cout << "True";
    
    return 0;
}
