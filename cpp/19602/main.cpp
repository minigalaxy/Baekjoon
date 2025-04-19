#include <iostream>

using namespace std;

int S, M, L;

int main()
{
    cin >> S >> M >> L;
    
    if(S + 2 * M + 3 * L >= 10) cout << "happy";
    else cout << "sad";
    
    return 0;
}
