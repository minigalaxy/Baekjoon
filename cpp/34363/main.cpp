#include <iostream>

using namespace std;

int S;

double D;

double T;

int main()
{
    cin >> S >> D >> T;
    
    cout << (S * 5280 * T >= D * 3600 ? "MADE IT" : "FAILED TEST");
    
    return 0;
}
