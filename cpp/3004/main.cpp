#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    if(N % 2 == 1) cout << (N / 2 + 1) * (N / 2 + 2);
    else cout << (N / 2 + 1) * (N / 2 + 1);
    
    return 0;
}
