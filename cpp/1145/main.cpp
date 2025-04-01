#include <iostream>
#include <algorithm>

using namespace std;

int n[5];

int res = 1000000;

int main()
{
    for(int i = 0; i < 5; i++) cin >> n[i];
    
    sort(n, n + 5);
    
    for(int i = n[0]; i < n[4] * n[3] * n[2]; i++){
        int ev = 0;
        
        for(int j = 0; j < 5; j++){
            if(i % n[j] == 0) ev++;
        }
        
        if(ev >= 3){
            cout << i;
            
            return 0;
        }
    }
    
    cout << res;
    
    return 0;
}
