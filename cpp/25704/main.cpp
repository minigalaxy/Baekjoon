#include <iostream>

using namespace std;

int N;

int P;

int main()
{
    cin >> N >> P;
    
    if(N >= 20) cout << min(P / 4 * 3, max(0, P - 2000));
    else if(N >= 15) cout << min(P / 10 * 9, max(0, P - 2000));
    else if(N >= 10) cout << min(P / 10 * 9, max(0, P - 500));
    else if(N >= 5) cout << max(0, P - 500);
    else cout << P;
    
    return 0;
}
