#include <iostream>

using namespace std;

string A, B;

long long a = 0, b = 0;

int main()
{
    cin >> A >> B;
    
    for(int i = 0; i < A.size(); i++) a += A[i] - '0';
    for(int i = 0; i < B.size(); i++) b += B[i] - '0';
    
    cout << a * b;
    
    return 0;
}
