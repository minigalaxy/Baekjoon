#include <iostream>

using namespace std;

int N;

int A, B, C, D;

string S;

int main()
{
    cin >> N;
    
    cin >> A >> B >> C >> D;
    
    cin >> S;
    
    if(S[0] != 'a' || S[N - 1] != 'a'){
        cout << "No";
        
        return 0;
    }
    
    for(int i = 0; i < N; i++){
        if(i < N - 1 && S[i] == S[i + 1]){
            cout << "No";
            
            return 0;
        }
        
        if(S[i] == 'a') A--;
        else if(S[i] == 'b') B--;
        else if(S[i] == 'c') C--;
        else D--;
    }
    
    if(A < 0 || B < 0 || C < 0 || D < 0){
        cout << "No";
        
        return 0;
    }
    
    cout << "Yes";
    
    return 0;
}
