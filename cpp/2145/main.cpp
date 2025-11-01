#include <iostream>

using namespace std;

int N;

int main()
{
    while(true){
        cin >> N;
        
        if(N == 0) break;
    
        while(N >= 10){
            int tmp = 0;
            
            while(N){
                tmp += N % 10;
                N /= 10;
            }
            
            N = tmp;
        }
        
        cout << N << '\n';
    }
    
    return 0;
}
