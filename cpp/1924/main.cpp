#include <iostream>

using namespace std;

int x, y;

int d = 0;

int m[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

string weeks[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int main()
{
    cin >> x >> y;
    
    for(int i = 0; i < x - 1; i++) d += m[i];
    
    d += y;
    
    cout << weeks[d % 7];
    
    return 0;
}
