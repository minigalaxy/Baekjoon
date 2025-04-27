#include <iostream>
#include <algorithm>

using namespace std;

int n;

int d[100000];

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> d[i];
    
    cout << min_element(d, d + n) - d;
    
    return 0;
}
