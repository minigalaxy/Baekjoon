#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

double x[3], y[3];

double e[3];

string E, A;

int main()
{
    while(true){
        cin >> x[0];

        if(x[0] == -1) break;

        cin >> y[0] >> x[1] >> y[1] >> x[2] >> y[2];

        e[0] = round(((x[0] - x[1]) * (x[0] - x[1]) + (y[0] - y[1]) * (y[0] - y[1])) * 100) / 100;
        e[1] = round(((x[1] - x[2]) * (x[1] - x[2]) + (y[1] - y[2]) * (y[1] - y[2])) * 100) / 100;
        e[2] = round(((x[0] - x[2]) * (x[0] - x[2]) + (y[0] - y[2]) * (y[0] - y[2])) * 100) / 100;

        sort(e, e + 3);

        if(e[0] == e[1] && e[1] == e[2]) E = "Equilateral";
        else if(e[0] == e[1] || e[1] == e[2] || e[0] == e[2]) E = "Isosceles";
        else E = "Scalene";

        if(e[2] > e[0] + e[1]) A = "Obtuse";
        else if(e[2] == e[0] + e[1]) A = "Right";
        else A = "Acute";

        cout << E << ' ' << A << '\n';
    }

    return 0;
}
