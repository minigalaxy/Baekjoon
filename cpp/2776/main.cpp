#include <iostream>
#include <set>
#include <vector>

using namespace std;

int T;

int N, M;

set<int> m1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        m1.clear();
        
        for(int j = 0; j < N; j++){
            int t;
            cin >> t;
            
            m1.insert(t);
        }
        
        cin >> M;
        
        for(int j = 0; j < M; j++){
            int t;
            cin >> t;
            
            cout << (m1.find(t) != m1.end()) << '\n';
        }
    }
    
    return 0;
}
