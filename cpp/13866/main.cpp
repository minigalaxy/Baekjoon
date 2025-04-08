#include <iostream>

using namespace std;

int A, B, C, D;

int main()
{
    cin >> A >> B >> C >> D;
    
    cout << abs(2 * (max(max(A, B), max(C, D)) + min(min(A, B), min(C, D))) - A - B - C - D);
    
    return 0;
}
