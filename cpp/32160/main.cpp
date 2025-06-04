#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    if(N % 2 == 0){
        cout << N - ((N / 2) % 2) << '\n';
            
        for(int i = 2; i < N; i += 2) cout << i << ' ' << i + 1 << '\n';
    
        bool t = true;
    
        for(int i = 0; i < N / 2 - 1; i++){
            cout << t << " 1\n";
            t = !t;
        }
        
        cout << t << ' ' << N;
    } else {
        cout << N - (((N - 1) / 2) % 2) << '\n';
            
        for(int i = 1; i < N; i += 2) cout << i << ' ' << i + 1 << '\n';
    
        bool t = true;
    
        for(int i = 0; i < (N - 1) / 2 - 1; i++){
            cout << t << " 1\n";
            t = !t;
        }
        
        cout << t << ' ' << N;
    }
    
    return 0;
}
