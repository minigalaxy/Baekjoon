#include <iostream>

using namespace std;

int n, a[100000], b[100000], res = -100000000;

void solve(int i, int c){
    if(i < n){
        c += a[i];

        if(c > b[i]){
            res = max(res, c);

            b[i] = c;

            solve(i + 1, c);
            solve(i + 1, 0);
        }

    }

}

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    fill(b, b + n, -100000000);

    solve(0, 0);

    cout << res;

    return 0;
}
