#include <iostream>

using namespace std;

double x, y, z;
double x2, y2, z2;

int main()
{
    cin >> x >> y >> z;
    cin >> x2 >> y2 >> z2;
    
    if(z2 >= z){
        if(y2 >= y){
            if(x2 >= x) cout << 'A';
            else if(x2 >= x / 2) cout << 'B';
            else cout << 'C';
        } else if(y2 >= y / 2) cout << 'D';
        else cout << 'E';
    }
    
    return 0;
}
