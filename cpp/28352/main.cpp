#include <iostream>

using namespace std;

int N;

int res = 6;

int main()
{
    cin >> N;
    
    for(int i = 11; i <= N; i++) res *= i;
    
    cout << res;
    
    return 0;
}
