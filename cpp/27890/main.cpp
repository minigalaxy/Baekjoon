#include <iostream>

using namespace std;

int x, N;

int main()
{
    cin >> x >> N;
    
    for(int i = 0; i < N; i++){
        x = ((x % 2 == 0) ? (x / 2) ^ 6 : (2 * x) ^ 6);
    }
    
    cout << x;
    
    return 0;
}
