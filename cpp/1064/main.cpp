#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int x[3], y[3];

double res[3];

int main()
{
    cout.precision(15);
    cout << fixed;
    
    for(int i = 0; i < 3; i++) cin >> x[i] >> y[i];
    
    if((x[0] - x[1]) * (y[1] - y[2]) == (x[1] - x[2]) * (y[0] - y[1])) cout << -1;
    else {
        res[0] = (sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2)) + sqrt(pow(x[0] - x[2], 2) + pow(y[0] - y[2], 2)));
        res[1] = (sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2)) + sqrt(pow(x[1] - x[2], 2) + pow(y[1] - y[2], 2)));
        res[2] = (sqrt(pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2)) + sqrt(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2)));
    
        cout << (*max_element(res, res + 3) - *min_element(res, res + 3)) * 2;
    }
    
    
    return 0;
}
