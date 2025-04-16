#include <iostream>

using namespace std;

int T;

int N, A, D;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N >> A >> D;
        
        cout << N * (A + (A + D * (N - 1))) / 2 << '\n';
    }
    
    return 0;
}
