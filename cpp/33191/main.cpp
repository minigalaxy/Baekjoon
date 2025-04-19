#include <iostream>

using namespace std;

int b;

int c[3];

int main()
{
    cin >> b;
    
    cin >> c[0] >> c[1] >> c[2];
    
    if(b >= c[0]) cout << "Watermelon";
    else if(b >= c[1]) cout << "Pomegranates";
    else if(b >= c[2]) cout << "Nuts";
    else cout << "Nothing";
    
    return 0;
}
