#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    while(cin >> A >> B >> C) cout << max(B - A - 1, C - B - 1) << '\n';
    
    return 0;
}
