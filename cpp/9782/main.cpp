#include <iostream>

using namespace std;

int n;

double res;

int i = 1;

int main()
{
    cout.precision(1);
    cout.setf(ios::fixed);
    
    while(true){
        cin >> n;
    
        if(n == 0) break;
        
        if(n % 2 == 1){
            int t;
                
            for(int i = 0; i < n / 2; i++) cin >> t;
            
            cin >> res;
            
            for(int i = 0; i < n / 2; i++) cin >> t;
        } else {
            double t1, t2;
            
            for(int i = 0; i < n / 2 - 1; i++) cin >> t1;
            
            cin >> t1 >> t2;
            
            res = (t1 + t2) / 2;
            
            for(int i = 0; i < n / 2 - 1; i++) cin >> t1;
        }
        
        cout << "Case " << i << ": " << res << '\n';
        
        i++;
    }
    return 0;
}
