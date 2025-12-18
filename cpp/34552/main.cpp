#include <iostream>

using namespace std;

int M[11];

int N;

int B, S;
double L;

int res = 0;

int main()
{
    for(int i = 0; i < 11; i++) cin >> M[i];
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> B >> L >> S;
        
        if(S >= 17 && L >= 2.0) res += M[B];
    }
    
    cout << res;
    
    return 0;
}
