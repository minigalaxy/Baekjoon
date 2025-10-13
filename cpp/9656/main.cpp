#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    if(((N - 1) % 4) % 2 == 1) cout << "SK";
    else cout << "CY";
    
    return 0;
}
