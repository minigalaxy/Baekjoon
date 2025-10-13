#include <iostream>

using namespace std;

int N, A;

bool p[1'000'001] = { false, }, u[1'000'001] = { false, };

long long res = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    fill(p + 2, p + 1'000'001, true);
    
    for(int i = 2; i <= 1'000; i++){
        for(int j = 2; j * i <= 1'000'000; j++){
            p[i * j] = false;
        }
    }
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A;
        
        if(p[A] && !u[A]){
            res *= A;
            u[A] = true;
        }
    }
    
    if(res == 1) cout << -1;
    else cout << res;
    
    return 0;
}
