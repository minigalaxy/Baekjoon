#include <iostream>
#include <queue>

using namespace std;

int T;

int K;

priority_queue<long long, vector<long long>, greater<long long>> f;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> K;
        
        for(int i = 0; i < K; i++){
            int t;
            cin >> t;
            
            f.push(t);
        }
        
        long long res = 0;
        
        while(f.size() >= 2){
            long long A = f.top();
            f.pop();
            long long B = f.top();
            f.pop();
            
            res += A + B;
            
            f.push(A + B);
        }
        
        while(!f.empty()) f.pop();

        cout << res << '\n';
    }
    
    return 0;
}
