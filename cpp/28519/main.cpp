#include <iostream>

using namespace std;

int N, M;

int main()
{
    cin >> N >> M;
    
    cout << min(N, M) * 2 + (abs(N - M) > 0);
    
    return 0;
}
