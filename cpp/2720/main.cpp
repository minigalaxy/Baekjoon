#include <iostream>
#include <vector>

using namespace std;

int T;

int C;

vector<int> q, d, n, p;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> C;

        q.push_back(C / 25);
        C %= 25;
        d.push_back(C / 10);
        C %= 10;
        n.push_back(C / 5);
        C %= 5;
        p.push_back(C);
    }

    for(int i = 0; i < T; i++) cout << q[i] << ' ' << d[i] << ' ' << n[i] << ' ' << p[i] << '\n';

    return 0;
}
