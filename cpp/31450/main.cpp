#include <iostream>

using namespace std;

int M, K;

int main()
{
    cin >> M >> K;
    
    cout << ((M % K == 0) ? "Yes" : "No");
    
    return 0;
}
