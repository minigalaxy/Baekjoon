#include <iostream>

using namespace std;

int N, Q;

int B[100];

int t[10001], s;

int main()
{
    cin >> N >> Q;
    
    for(int i = 0; i < N; i++) cin >> B[i];
    
    for(int i = 0, j = 0; i < N; i++){
        for(int k = 0; k < B[i]; k++){
            t[j++] = i + 1;
        }
    }
    
    for(int i = 0; i < Q; i++){
        cin >> s;
        
        cout << t[s] << '\n';
    }
    
    return 0;
}
