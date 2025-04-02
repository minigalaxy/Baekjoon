#include <iostream>

using namespace std;

int N, K;

int n1[20], n2[20];

int main()
{
    cin >> N >> K;
    
    for(int i = 0; i < N; i++){
        cin >> n1[i];
        getchar();
    }
    
    for(int i = 0; i < K; i++){
        for(int j = 0; j < N - 1; j++){
            n2[j] = n1[j + 1] - n1[j];
        }
        for(int j = 0; j < N - 1; j++) n1[j] = n2[j];
        
        N--;
    }
    
    cout << n1[0];
    
    for(int i = 1; i < N; i++) cout << ',' << n1[i];
    
    return 0;
}
