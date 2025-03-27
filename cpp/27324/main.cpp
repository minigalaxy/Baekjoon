#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    cout << ((N / 10) == (N % 10));
    
    return 0;
}
