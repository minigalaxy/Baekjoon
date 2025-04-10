#include <iostream>

using namespace std;

int N;

int a, b;

int A[4], B[4];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> a;
        
        fill(A, A + 4, 0);
        
        for(int j = 0; j < a; j++){
            int t;
            cin >> t;
            
            A[t - 1]++;
        }
        
        cin >> b;
        
        fill(B, B + 4, 0);
        
        for(int j = 0; j < b; j++){
            int t;
            cin >> t;
            
            B[t - 1]++;
        }
        
        if(A[3] == B[3]){
            if(A[2] == B[2]){
                if(A[1] == B[1]){
                    if(A[0] == B[0]) cout << "D\n";
                    else cout << ((A[0] > B[0]) ? "A\n" : "B\n");
                } else cout << ((A[1] > B[1]) ? "A\n" : "B\n");
            } else cout << ((A[2] > B[2]) ? "A\n" : "B\n");
        } else cout << ((A[3] > B[3]) ? "A\n" : "B\n");
    }
    
    return 0;
}
