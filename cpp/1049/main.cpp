#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int m = 1000, s = 1000;

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        int t, t2;
        cin >> t >> t2;
    
        m = min(m, t);
        s = min(s, t2);
    }
    
    if(m < s * 6){
        if(N % 6 * s < m) cout << N / 6 * m + N % 6 * s;
        else cout << N / 6 * m + m;
    } else cout << N * s;
    
    return 0;
}
