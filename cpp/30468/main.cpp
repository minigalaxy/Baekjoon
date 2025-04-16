#include <iostream>

using namespace std;

int STR, DEX, INT, LUK, N;

int main()
{
    cin >> STR >> DEX >> INT >> LUK >> N;
    
    cout << max(0, N * 4 - STR - DEX - INT - LUK);
    
    return 0;
}
