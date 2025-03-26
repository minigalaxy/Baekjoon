#include <iostream>

using namespace std;

int n;

int fibonacci(int cur){
    if(cur == 0) return 0;
    else if(cur == 1) return 1;

    return fibonacci(cur - 1) + fibonacci(cur - 2);
}

int main()
{
    cin >> n;

    cout << fibonacci(n);

    return 0;
}
