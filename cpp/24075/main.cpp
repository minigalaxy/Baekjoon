#include <iostream>

using namespace std;

int A, B;

int main()
{
    cin >> A >> B;
    
    cout << max(A + B, A - B) << '\n' << min(A + B, A - B);
    
    return 0;
}
