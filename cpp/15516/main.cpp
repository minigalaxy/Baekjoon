#include <iostream>

using namespace std;

int n;

int A[1000];

int S[1000] = { 0, };

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> A[i];
        
        for(int j = 0; j < i; j++) if(A[j] < A[i]) S[i]++;
    }
    
    for(int i = 0; i < n; i++) cout << S[i] << '\n';
    
    return 0;
}
