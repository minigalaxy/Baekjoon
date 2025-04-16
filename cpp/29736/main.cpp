#include <iostream>

using namespace std;

int A, B;

int K, X;

int res = 0;

int main()
{
    cin >> A >> B >> K >> X;
    
    for(int i = A; i <= B; i++){
        if(abs(K - i) <= X) res++;
    }
    
    if(res > 0) cout << res;
    else cout << "IMPOSSIBLE";
    
    return 0;
}
