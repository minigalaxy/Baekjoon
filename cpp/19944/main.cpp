#include <iostream>

using namespace std;

int N, M;

int main()
{
    cin >> N >> M;
    
    if(M == 1 || M == 2) cout << "NEWBIE!";
    else if(M <= N) cout << "OLDBIE!";
    else cout << "TLE!";
    
    return 0;
}
