#include <iostream>

using namespace std;

int n[3], d[3];

int main()
{
    cin >> n[0] >> d[0] >> n[1] >> d[1];

    n[3] = n[0] * d[1] + n[1] * d[0];
    d[3] = d[0] * d[1];

    int a = n[3], b = d[3];

    while(b){
        int tmp = b;
        b = a % b;
        a = tmp;
    }

    cout << n[3] / a << ' ' << d[3] / a;

    return 0;
}
