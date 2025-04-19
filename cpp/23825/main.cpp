#include <iostream>

using namespace std;

int N, M;

int main()
{
    cin >> N >> M;
    
    cout << min(N / 2, M / 2);
    
    return 0;
}
