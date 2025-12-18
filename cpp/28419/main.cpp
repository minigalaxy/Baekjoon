#include <iostream>

using namespace std;

int N;

int A[100'000];

long long o = 0, e = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = 0; i < N; i += 2) o += A[i];
    for(int i = 1; i < N; i += 2) e += A[i];
    
    if(N == 3){
        if(e >= o) cout << e - o;
        else cout << -1;
    } else cout << abs(o - e);
    
    return 0;
}
