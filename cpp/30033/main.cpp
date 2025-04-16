#include <iostream>

using namespace std;

int N;

int A[1000];

int B;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = 0; i < N; i++){
        cin >> B;
            
        if(B >= A[i]) res++;
    }
    
    cout << res;
    
    return 0;
}
