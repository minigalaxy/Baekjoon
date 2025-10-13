#include <iostream>
#include <algorithm>

using namespace std;

int N;

int A[1000];

int m[1000];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(A[j] < A[i]){
                m[j] = max(m[j], m[i] + 1);
            }
        }
    }
    
    cout << *max_element(m, m + N) + 1;
    
    return 0;
}
