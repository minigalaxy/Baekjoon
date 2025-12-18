#include <iostream>

using namespace std;

double c;

int main()
{
    while(cin >> c && c > 0){
        double t = 0;
        int n = 2;
        
        while(t < c) t += 1.0 / n++;
        
        cout << n - 2 << " card(s)\n";
    }
    
    return 0;
}
