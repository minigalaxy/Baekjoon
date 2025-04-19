#include <iostream>

using namespace std;

double p, r;

int main()
{
    cin >> p >> r;
    
    if(p / r < 0.2) cout << "weak";
    else if(p / r < 0.4) cout << "normal";
    else if(p / r < 0.6) cout << "strong";
    else cout << "very strong";
    
    return 0;
}
