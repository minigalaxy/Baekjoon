#include <iostream>
#include <stack>

using namespace std;

int N;

int A[1000000];

stack<int> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = N - 1; i >= 0; i--){
        while(!s.empty() && A[i] >= s.top()) s.pop();
            
        if(s.empty()){
            s.push(A[i]);
            A[i] = -1;
        } else {
            int t = s.top();
            s.push(A[i]);
            A[i] = t;
        }
    }
    
    for(int i = 0; i < N; i++) cout << A[i] << ' ';
    
    return 0;
}
