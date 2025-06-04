#include <iostream>
#include <algorithm>

using namespace std;

int N, B;

pair<int, pair<int, int>> A[1000];

int main()
{
    cin >> N >> B;
    
    for(int i = 0; i < N; i++){
        int P, S;
        cin >> P >> S;
        
        A[i] = { P + S, { P, S } };
    }
    
    sort(A, A + N);
    
    for(int i = 0; i < N; i++){
        if(A[i].first > B){
            for(int j = 0; j < i; j++){
                if(A[i].first <= B + A[j].first - (A[j].second.first / 2 + A[j].second.second)){
                    cout << i + 1;
                    
                    return 0;
                }
            }
            for(int j = i; j < N; j++){
                if(A[j].second.first / 2 + A[j].second.second <= B){
                    cout << i + 1;
                    
                    return 0;
                }
            }
            
            cout << i;
            
            return 0;
        }
        
        B -= A[i].first;
    }
    
    cout << N;
    
    return 0;
}
