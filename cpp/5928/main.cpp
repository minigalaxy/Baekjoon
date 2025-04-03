#include <iostream>

using namespace std;

int D, H, M;

int main()
{
    cin >> D >> H >> M;
    
    int res = (D - 11) * 60 * 24 + (H - 11) * 60 + M - 11;
    
    cout << ((res >= 0) ? res : -1);
    
    return 0;
}
