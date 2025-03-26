#include <iostream>

using namespace std;

int c;

int m1 = 0, m2 = 1000000;

int main()
{
    cin >> c;

    for(int i = 0; i < c; i++){
        int t;
        cin >> t;

        m1 = max(m1, t);
        m2 = min(m2, t);
    }

    cout << m1 * m2;

    return 0;
}
