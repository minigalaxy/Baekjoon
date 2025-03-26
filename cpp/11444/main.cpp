#include <iostream>
#include <map>

using namespace std;

long long n;

map<long long, int> memory;

long long fibonacci(long long n){
    long long tmp;

    if(memory.find(n) != memory.end()) return memory[n];

    if(n % 2 == 0) tmp = (fibonacci(n / 2 - 1) * fibonacci(n / 2) + fibonacci(n / 2) * fibonacci(n / 2 + 1)) % 1000000007;
    else tmp = (fibonacci(n / 2) * fibonacci(n / 2) + fibonacci(n / 2 + 1) * fibonacci(n / 2 + 1)) % 1000000007;

    memory[n] = tmp;

    return tmp;
}

int main()
{
    memory[0] = 0;
    memory[1] = 1;
    memory[2] = 1;

    cin >> n;

    cout << fibonacci(n);

    return 0;
}
