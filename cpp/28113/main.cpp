#include <iostream>

using namespace std;

int N, A, B;

int main()
{
    cin >> N >> A >> B;
    
    if(N > B) cout << "Bus";
    else if(A < B) cout << "Bus";
    else if(A == B) cout << "Anything";
    else cout << "Subway";
    
    return 0;
}
