#include <iostream>

using namespace std;

int N;

int A[1000];

int mem[1001] = { 0, };

int res = 0;

void bt(int c){
    for(int i = 0; i < c; i++){
        if(A[i] < A[c] && mem[i] == mem[c] - 1){
            bt(i);
        
            break;
        }
    }
    
    cout << A[c] << ' ';
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++){
            if(A[j] < A[i]) mem[i] = max(mem[i], mem[j] + 1);
        }
        
        if(mem[res] < mem[i]) res = i;
    }
    
    cout << mem[res] + 1 << '\n';
    
    bt(res);
    
    return 0;
}
