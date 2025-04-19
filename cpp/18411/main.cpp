#include <iostream>
#include <algorithm>

using namespace std;

int n[3];

int main()
{
    cin >> n[0] >> n[1] >> n[2];

    cout << n[0] + n[1] + n[2] - *min_element(n, n + 3);

    return 0;
}
