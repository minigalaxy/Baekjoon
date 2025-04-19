#include <iostream>
#include <cmath>

using namespace std;

int n;

double c;

double sum;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> c;
        
        sum += c * c * c;
    }
    
    cout.precision(6);
    cout << fixed;
    
    cout << pow(sum, 1.0 / 3.0);
    
    return 0;
}
