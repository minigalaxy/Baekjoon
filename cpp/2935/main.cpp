#include <iostream>

using namespace std;

string A;

char o;

string B;

int main()
{
    cin >> A >> o >> B;
    
    if(o == '+'){
        if(A.size() > B.size()){
            for(int i = 0; i < A.size(); i++){
                if(i >= A.size() - B.size()) cout << A[i] - '0' + B[i - A.size() + B.size()] - '0';
                else cout << A[i];
            }
        } else {
            for(int i = 0; i < B.size(); i++){
                if(i >= B.size() - A.size()) cout << A[i - B.size() + A.size()] - '0' + B[i] - '0';
                else cout << B[i];
            }
        }
    } else {
        cout << '1';
        
        for(int i = 0; i < (A.size() - 1) + (B.size() - 1); i++) cout << '0';
    }
    
    return 0;
}
