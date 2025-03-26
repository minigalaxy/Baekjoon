#include <iostream>

using namespace std;

int a, b, res;

int main()
{
    cin >> a >> b;

    res = a * b;

    while(b){
        cout << a * (b % 10) << '\n';
        b /= 10;
    }

    cout << res;

    return 0;
}
