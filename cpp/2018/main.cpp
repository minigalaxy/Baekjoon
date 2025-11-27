#include <iostream>

using namespace std;

int N;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        if(N % i == 0 && i % 2 == 1){
            if(N / i - i / 2 > 0) res++;
        } else if(N % i != 0 && (N * 2) % i == 0 && i % 2 == 0){
            if(N / i - i / 2 + 1 > 0) res++;
        }
    }
    
    cout << res;
    
    return 0;
}
