#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int opinions[300000];

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) cin >> opinions[i];

    sort(opinions, opinions + n);

    double t = 0;
    int c = 0;

    for(int i = round(n * 0.15); i < n - round(n * 0.15); i++){
        t += opinions[i];
        c++;
    }

    if(c > 0) cout << round(t / c);
    else cout << 0;

    return 0;
}
