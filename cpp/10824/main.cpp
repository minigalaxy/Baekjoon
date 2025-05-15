#include <iostream>
#include <string>

using namespace std;

string A, B, C, D;

int main()
{
    cin >> A >> B >> C >> D;
    
    cout << stoll(A + B) + stoll(C + D);
    
    return 0;
}
