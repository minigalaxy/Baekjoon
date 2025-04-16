#include <iostream>

using namespace std;

int A, B;

int main()
{
    cin >> A >> B;
    
    cout << ((A > B) ? B * 2 + 1 : A * 2 - 1);
    
    return 0;
}
