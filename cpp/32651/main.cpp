#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    cout << ((N % 2024 == 0 && N <= 100000) ? "Yes" : "No");
    
    return 0;
}
