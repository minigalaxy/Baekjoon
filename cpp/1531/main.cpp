#include <iostream>

using namespace std;

int N, M;

int x[2], y[2];

int tp[101][101] = { 0, };

int res = 0;

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        cin >> x[0] >> y[0] >> x[1] >> y[1];
        
        for(int i = x[0]; i <= x[1]; i++){
            for(int j = y[0]; j <= y[1]; j++){
                tp[i][j]++;
            }
        }
    }
    
    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            if(tp[i][j] > M) res++;
        }
    }
    
    cout << res;
    
    return 0;
}
