#include <iostream>

using namespace std;

int N;

int a[200000];

int mn = 1000000000, res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> a[i];

        mn = min(mn, a[i]);

        res = max(res, a[i] - mn);
    }

    cout << res;

    return 0;
}
