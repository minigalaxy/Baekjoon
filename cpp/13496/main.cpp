#include <iostream>

using namespace std;

int K;

int n, s, d;

int di, bi;

int res;

int main()
{
    cin >> K;
    
    for(int i = 1; i <= K; i++){
        res = 0;
            
        cin >> n >> s >> d;
        
        for(int j = 0; j < n; j++){
            cin >> di >> bi;
            
            if(di <= s * d) res += bi;
        }
    
        cout << "Data Set " << i << ":\n" << res << "\n\n";
    }
    
    return 0;
}
