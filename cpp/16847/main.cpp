#include <iostream>
#include <algorithm>

using namespace std;

int K;

int n, k;

string T, A;

bool b[100];

int main()
{
    cin >> K;
    
    for(int i = 0; i < K; i++){
        cin >> n >> k;
    
        fill(b, b + k, false);
        
        cin >> T;
        
        for(int j = 0; j < n; j++){
            cin >> A;
            
            for(int l = 0; l < k; l++){
                if(A[l] == T[l]) b[l] = true;
            }
        }
        
        cout << "Data Set " << i + 1 << ":\n" << count(b, b + k, false) << '/' << k << "\n\n";
    }
    
    return 0;
}
