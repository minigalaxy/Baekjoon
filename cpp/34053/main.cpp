#include <iostream>

using namespace std;

int N, M;

int a;

int mn = 1'000'000'000;
long long sum = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> a;
            
            sum += a;
            mn = min(mn, a);
        }
    }
    
    cout << sum - mn;
    
    return 0;
}
