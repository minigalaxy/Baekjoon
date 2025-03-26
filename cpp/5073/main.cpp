#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    while(true){
        cin >> a >> b >> c;

        if(a == 0) break;

        if(a + b + c - max(a, max(b, c)) * 2 <= 0) cout << "Invalid";
        else if(a == b && b == c) cout << "Equilateral";
        else if(a == b || b == c || a == c) cout << "Isosceles";
        else cout << "Scalene";

        cout << '\n';
    }

    return 0;
}
