#include <iostream>

using namespace std;

int N;

int t;

int Y = 0, M = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> t;
        
        t++;
        
        Y += t / 30 + (t % 30 > 0);
        M += t / 60 + (t % 60 > 0);
    }
    
    Y *= 10;
    M *= 15;
    
    if(Y < M) cout << "Y " << Y << '\n';
    else if(M < Y) cout << "M " << M << '\n';
    else cout << "Y M " << Y << '\n';
    
    return 0;
}
