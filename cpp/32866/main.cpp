#include <iostream>

using namespace std;

double N;

double X;

int main()
{
    cin >> N >> X;
    
    cout.precision(6);
    cout << fixed;
    
    cout << (100 / (100 - X) - 1) * 100;
    
    return 0;
}
