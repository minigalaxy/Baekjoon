#include <iostream>

using namespace std;

int N;

int m[10'001] = { 0, };

int K;

int a, t;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        cin >> m[i];
        m[i] += m[i - 1];
    }
    
    cin >> K;
    
    for(int i = 0; i < K; i++){
        cin >> a >> t;
        
        res = max(res, a);
        
        if(t < m[a]){
            cout << -1;
            
            return 0;
        }
    }
    
    cout << m[res] * 2;
    
    return 0;
}
