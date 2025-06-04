#include <iostream>

using namespace std;

long long D;

long long N, M, K;

int main()
{
    cin >> D;
    
    cin >> N >> M >> K;
    
    long long a = D - N % D, b = D - M % D, c = K % D;
    
    if(a + b <= c) cout << K - a - b;
    else {
        if(a <= c && b <= c) cout << K - min(a, b);
        else if(a <= c) cout << K - a;
        else if(b <= c) cout << K - b;
        else if(a + b <= c + D && K >= D) cout << K - a - b;
        else cout << K;
    }
    
    return 0;
}
