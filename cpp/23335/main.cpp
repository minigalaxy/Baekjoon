#include <iostream>

using namespace std;

int T;

int n;

int S[1000001] = { 0, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    for(int i = 1; i <= 1000000; i++){
        for(int j = i * 2; j <= 1000000; j += i){
            S[j] += i;
        }
    }
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> n;
        
        if(S[n] > n) cout << "abundant\n";
        else if(S[n] < n) cout << "deficient\n";
        else cout << "perfect\n";
    }
    
    return 0;
}
