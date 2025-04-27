#include <iostream>
#include <algorithm>

using namespace std;

double n[4];

double v[4];

int main()
{
    cin >> n[1] >> n[0] >> n[2] >> n[3];
    
    for(int i = 0; i < 4; i++){
        v[i] = n[1] / n[2] + n[0] / n[3];
        
        rotate(n, n + 1, n + 4);
    }
    
    cout << max_element(v, v + 4) - v;
    
    return 0;
}
