#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    int t = N * (N + 1) / 2;
    
    cout << t << '\n' << t * t << '\n' << t * t;
    
    return 0;
}
