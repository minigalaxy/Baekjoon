#include <iostream>

using namespace std;

int X;

int main()
{
    cin >> X;

    int n = 1;

    while(true){
        if(X <= n * (n + 1) / 2) break;
        n++;
    }

    if(n % 2 == 0) cout << X - n * (n - 1) / 2 << '/' << n * (n + 1) / 2 - X + 1;
    else cout << n * (n + 1) / 2 - X + 1 << '/' << X - n * (n - 1) / 2;

    return 0;
}
