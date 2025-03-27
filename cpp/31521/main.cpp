#include <iostream>

using namespace std;

int n;

int num[7] = { 0, };

int a = 0, b = 0;

void solve(int c){
    if(c > 4){
        bool f = false;    
        
        for(int i = 1; i <= 6; i++){
            if(num[i] >= 2) f = true;
        }
    
        if(f) b++;
        else a++;
    } else {
        if(c <= n){
            int t;
            cin >> t;
            
            num[t]++;
            solve(c + 1);
            num[t]--;
        } else {
            for(int i = 1; i <= 6; i++){
                num[i]++;
                solve(c + 1);
                num[i]--;
            }
        }
    }
}

int main()
{
    cin >> n;
    
    solve(1);
    
    cout << a << ' ' << b;
    
    return 0;
}
