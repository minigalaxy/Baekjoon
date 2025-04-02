#include <iostream>
#include <algorithm>

using namespace std;

int h[3], b[2];

int main()
{
    cin >> h[0] >> h[1] >> h[2] >> b[0] >> b[1];
    
    cout << *min_element(h, h + 3) + *min_element(b, b + 2) - 50;
    
    return 0;
}
