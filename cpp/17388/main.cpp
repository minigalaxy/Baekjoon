#include <iostream>
#include <algorithm>

using namespace std;

int p[3];

string u[3] = { "Soongsil", "Korea", "Hanyang" };

int main()
{
    cin >> p[0] >> p[1] >> p[2];

    if(p[0] + p[1] + p[2] >= 100) cout << "OK";
    else cout << u[min_element(p, p + 3) - p];

    return 0;
}
