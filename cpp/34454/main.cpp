#include <iostream>

using namespace std;

int N, C, P;

int main()
{
    cin >> N >> C >> P;
    
    cout << (N <= C * P ? "yes" : "no");
    
    return 0;
}
