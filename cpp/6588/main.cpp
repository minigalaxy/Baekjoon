#include <iostream>

using namespace std;

int n;

bool p[1'000'000] = { true, true, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(int i = 2; i <= 1'000; i++){
        for(int j = 2; i * j < 1'000'000; j++){
            p[i * j] = true;
        }
    }
    
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        for(int i = 2; i < n; i++){
            if(!p[i] && !p[n - i]){
                cout << n << " = " << i << " + " << n - i << '\n';
                
                break;
            }
        }
    }
    
    return 0;
}
