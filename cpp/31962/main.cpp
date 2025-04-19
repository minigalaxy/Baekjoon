#include <iostream>

using namespace std;

int N, X;

int S, T;

int res = 0;

int main()
{
    cin >> N >> X;
    
    for(int i = 0; i < N; i++){
        cin >> S >> T;
        
        if(S + T <= X){
            if(S > res) res = S;
        }
    }
    
    cout << ((res > 0) ? res : -1);
    
    return 0;
}
