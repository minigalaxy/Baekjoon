#include <iostream>

using namespace std;

double x[4], y[4];

int main()
{
    cout.precision(3);
    cout.setf(ios_base::fixed);

    while(cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]){
        if(x[0] == x[2] && y[0] == y[2]) cout << x[1] + x[3] - x[0] << ' ' << y[1] + y[3] - y[0] << '\n';
        else if(x[0] == x[3] && y[0] == y[3]) cout << x[1] + x[2] - x[0] << ' ' << y[1] + y[2] - y[0] << '\n';
        else if(x[1] == x[2] && y[1] == y[2]) cout << x[0] + x[3] - x[1] << ' ' << y[0] + y[3] - y[1] << '\n';
        else cout << x[0] + x[2] - x[1] << ' ' << y[0] + y[2] - y[1] << '\n';
    }

    return 0;
}
