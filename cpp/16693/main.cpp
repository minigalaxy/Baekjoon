#include <iostream>

using namespace std;

double A, R, P[2];

int main()
{
    cin >> A >> P[0] >> R >> P[1];
    
    if(A / P[0] > R * R * 3.141592653589793238 / P[1]) cout << "Slice of pizza";
    else cout << "Whole pizza";
    
    return 0;
}
