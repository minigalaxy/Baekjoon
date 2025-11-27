#include <iostream>

using namespace std;

int X, Y, Z;

int U, V, W;

int main()
{
    cin >> X >> Y >> Z;
    cin >> U >> V >> W;
    
    cout << U / 100 * X + V / 50 * Y + W / 20 * Z;
    
    return 0;
}
