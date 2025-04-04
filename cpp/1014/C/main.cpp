#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

int a[200000];

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int j = 0; j < n; j++) cin >> a[j];

        sort(a, a + n);
    }

    return 0;
}
