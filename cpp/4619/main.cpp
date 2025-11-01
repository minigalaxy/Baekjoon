#include <iostream>
#include <cmath>

using namespace std;

int B, N;

int main()
{
    
    while(true){
        cin >> B >> N;
        
        if(N == 0) break;
        
        int A = 0, res[2] = { 0, B };
        
        while(pow(A, N) < B){
            int d = abs(pow(++A, N) - B);
            
            if(d < res[1]){
                res[0] = A;
                res[1] = d;
            }
        }
        
        cout << res[0] << '\n';
    }
    return 0;
}
