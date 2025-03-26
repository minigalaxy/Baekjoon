#include <iostream>

using namespace std;

int n;

int f[41];

int res[2] = { 0, 0 };

int fib(int n){
    if(n == 1 || n == 2){
        res[0]++;

        return 1;
    } else return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n){
    f[1] = 1;
    f[2] = 1;

    for(int i = 3; i <= n; i++){
        res[1]++;

        f[i] = f[i - 1] + f[i - 2];
    }

    return f[n];
}

int main()
{
    cin >> n;

    fib(n);
    fibonacci(n);

    cout << res[0] << ' ' << res[1];

    return 0;
}
