#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int P[1'000];

int res[2] = { 0, 0 };

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < M; i++) cin >> P[i];
    
    sort(P, P + M, greater<>());
    
    for(int i = 0; i < M; i++){
        if(P[i] * min(N, i + 1) >= res[1]){
            res[0] = P[i];
            res[1] = P[i] * min(N, i + 1);
        }
    }
    
    cout << res[0] << ' ' << res[1];
    
    return 0;
}
