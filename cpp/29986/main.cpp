#include <iostream>

using namespace std;

int N, H;

int A;

int res = 0;

int main()
{
    cin >> N >> H;
    
    for(int i = 0; i < N; i++){
        cin >> A;
        
        if(H >= A) res++;
    }
    
    cout << res;
    
    return 0;
}
