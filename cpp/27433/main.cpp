#include <iostream>

using namespace std;

int N;

long long factorial(int cur){
    if(cur <= 1) return 1;

    return factorial(cur - 1) * cur;
}

int main()
{
    cin >> N;

    cout << factorial(N);

    return 0;
}
