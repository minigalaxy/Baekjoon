#include <iostream>
#include <cmath>

using namespace std;

int T;

long long N;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;

        long long s = 1, e = sqrt(N) * 2;
                
        while(s < e){
            long long m = (s + e) / 2 + 1;
            
            if(m * (m + 1) / 2 > N) e = m - 1;
            else s = m;
        }
        
        cout << s << '\n';
    }
    
    return 0;
}
