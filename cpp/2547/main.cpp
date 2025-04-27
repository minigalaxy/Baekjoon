#include <iostream>

using namespace std;

int T;

int N;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        int s = 0;
        
        for(int j = 0; j < N; j++){
            long long t;
            cin >> t;
            
            s += t % N;
        }
        
        cout << ((s % N == 0) ? "YES\n" : "NO\n");
    }
    
    return 0;
}
