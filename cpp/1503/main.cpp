#include <iostream>

using namespace std;

int N, M;

int S;

bool v[1'001] = { false, };

int res = 1'000'000'000;

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        cin >> S;
        
        v[S] = true;
    }
    
    for(int x = 1; x <= 1'001; x++){
        for(int y = x; y <= 1'001; y++){
            for(int z = y; z <= 1'001; z++){
                if(!v[x] && !v[y] && !v[z]){
                    res = min(res, abs(N - x * y * z));
                }
            }
        }
    }
    
    cout << res;
    
    return 0;
}
