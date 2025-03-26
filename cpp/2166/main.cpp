#include <iostream>

using namespace std;

int N;

long long coord[10000][2];

long long res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> coord[i][0] >> coord[i][1];
    coord[N][0] = coord[0][0];
    coord[N][1] = coord[0][1];

    for(int i = 0; i < N; i++) res += coord[i][0] * coord[i + 1][1] - coord[i + 1][0] * coord[i][1];

    cout << fixed;
    cout.precision(1);

    cout << abs(res) / 2;
    cout << ((res % 2 == 0) ? ".0" : ".5");

    return 0;
}
