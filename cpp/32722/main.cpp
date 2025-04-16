#include <iostream>

using namespace std;

int n[3];

int main()
{
    cin >> n[0] >> n[1] >> n[2];
    
    cout << (((n[0] == 1 || n[0] == 3) && (n[1] == 6 || n[1] == 8) && (n[2] == 2 || n[2] == 5)) ? "JAH" : "EI");\
    
    return 0;
}
