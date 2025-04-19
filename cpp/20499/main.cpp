#include <iostream>

using namespace std;

int K, D, A;

char t;

int main()
{
    cin >> K >> t >> D >> t >> A;
    
    cout << ((K + A < D || D == 0) ? "hasu" : "gosu");
    
    return 0;
}
