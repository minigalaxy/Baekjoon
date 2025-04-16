#include <iostream>

using namespace std;

long long N;

int N2;

short N3;

int main()
{
    cin >> N;
    
    N2 = N;
    N3 = N;
    
    if(N != N2) cout << "long long";
    else if(N2 != N3) cout << "int";
    else cout << "short";
    
    return 0;
}
