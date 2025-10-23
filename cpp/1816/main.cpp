#include <iostream>

using namespace std;

int N;

long long S;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        bool flag = false;
            
        cin >> S;
        
        for(int j = 2; j <= 1'000'000 && !flag; j++){
            if(S % j == 0) flag = true;
        }
    
        cout << ((flag) ? "NO" : "YES") << '\n';
    }
    
    return 0;
}
