#include <iostream>

using namespace std;

int N, M;

int main()
{
    cin >> N >> M;
    
    cout << ((N * 100 >= M) ? "Yes" : "No");
    
    return 0;
}
