#include <iostream>

using namespace std;

long long N, L;

int main()
{
    cin >> N >> L;
    
    for(int i = L; i <= 100; i++){
        if(2 * N >= i * i - i){
            if((i % 2 == 0 && N % i == i / 2) || (i % 2 == 1 && N % i == 0)){
                for(int j = 0; j < i; j++){
                    cout << N / i + (1 - i) / 2 + j << ' ';
                }
                
                return 0;
            }
        }
    }
    
    cout << -1;
    
    return 0;
}
