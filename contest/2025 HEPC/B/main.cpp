#include <iostream>

using namespace std;

int N;

int A[300000];

int res[2] = { 1, 1 };

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = 0, stk = 1; i < N - 1; i++){
        if(A[i + 1] < A[i]){
            res[0]++;
            stk = 1;
        }
        else stk++;
        
        res[1] = max(res[1], stk);
    }
    
    cout << res[0] << ' ' << res[1];
    
    return 0;
}
