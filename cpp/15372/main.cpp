#include <iostream>

using namespace std;

int T;

long long N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        cout << N * N << '\n';
    }
    
    return 0;
}
