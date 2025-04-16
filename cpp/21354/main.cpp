#include <iostream>

using namespace std;

int A, P;

int main()
{
    cin >> A >> P;
    
    if(A * 7 > P * 13) cout << "Axel";
    else if(A * 7 < P * 13) cout << "Petra";
    else cout << "lika";
    
    return 0;
}
