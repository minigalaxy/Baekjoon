#include <iostream>
#include <algorithm>

using namespace std;

int N, k;

int x[1000];

int main()
{
    cin >> N >> k;

    for(int i = 0; i < N; i++) cin >> x[i];

    sort(x, x + N, greater<int>());

    cout << x[k - 1];

    return 0;
}
