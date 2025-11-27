#include <iostream>

using namespace std;

int N, K, M;

int A;

int main()
{
    cin >> N >> K >> M;
    
    for(int i = 0; i < N; i++) cin >> A;
    
    for(int j = 0; j < M; j++){
        int i;
        cin >> i;
        
        if(i > 0 && K <= i) K = i - K + 1;
        else if(i < 0 && N + i + 1 <= K) K = 2 * N + i + 1 - K;
    }
    
    cout << K;
    
    return 0;
}
