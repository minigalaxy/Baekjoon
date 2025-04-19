#include <iostream>

using namespace std;

int Y, M, D;

char c;

int main()
{
    cin >> Y >> c >> M >> c >> D;
    
    cout << ((M * 28 + D <= 10 * 28 + 21 - 33) ? "GOOD" : "TOO LATE");
    
    return 0;
}
