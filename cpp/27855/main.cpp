#include <iostream>

using namespace std;

int H[2], B[2];

int main()
{
    cin >> H[0] >> B[0] >> H[1] >> B[1];
    
    if(H[0] * 3 + B[0] > H[1] * 3 + B[1]) cout << "1 " << H[0] * 3 + B[0] - H[1] * 3 - B[1];
    else if(H[0] * 3 + B[0] < H[1] * 3 + B[1]) cout << "2 " << H[1] * 3 + B[1] - H[0] * 3 - B[0];
    else cout << "NO SCORE";
    
    return 0;
}
