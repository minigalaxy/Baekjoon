#include <iostream>

using namespace std;

int N;

int M;

int A[100];

int w;

int s[100] = { 0, };

int main()
{
    cin >> N;
    
    cin >> M;
    
    for(int i = 0; i < M; i++) cin >> A[i];
    
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> w;
            
            if(w == A[i]) s[j]++;
            else s[A[i] - 1]++;
        }
    }
    
    for(int i = 0; i < N; i++) cout << s[i] << '\n';
    
    return 0;
}
