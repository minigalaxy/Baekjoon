#include <iostream>

using namespace std;

int N, M, K, L;

int t[200][200] = { 0, };

int main()
{
    cin >> N >> M >> K >> L;
    
    for(int i = 0; i < K; i++){
        int r, c;
        cin >> r >> c;
        
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                t[j][k] += abs(j - r) + abs(k - c);
            }
        }
    }
    
    
    
    return 0;
}
