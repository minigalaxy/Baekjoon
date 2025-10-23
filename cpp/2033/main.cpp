#include <iostream>
#include <cmath>

using namespace std;

double N;

int main()
{
    cin >> N;
    
    int m = 1;
    
    for(; N >= 10; m *= 10) N = round(N / 10);
    
    cout << int(N * m);
    
    return 0;
}
