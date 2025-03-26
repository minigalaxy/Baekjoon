#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    cin >> a >> b >> c;

    if(a + b + c != 180) cout << "Error";
    else if(a == 60 && b == 60) cout << "Equilateral";
    else if(a == b || b == c || a == c) cout << "Isosceles";
    else cout << "Scalene";

    return 0;
}
