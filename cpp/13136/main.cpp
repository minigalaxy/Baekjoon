#include <iostream>

using namespace std;

long long R, C, N;

int main()
{
    cin >> R >> C >> N;
    
    cout << ((R / N) + (R % N > 0)) * ((C / N) + (C % N > 0));
    
    return 0;
}
