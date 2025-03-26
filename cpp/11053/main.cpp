#include <iostream>
#include <vector>

using namespace std;

int N;

int A[1000];

int memory[1000] = { 0, };

int res = 0;

void dp(int idx, int len){
    if(memory[idx] >= len) return;
    memory[idx] = len;

    if(len > res) res = len;

    for(int i = idx + 1; i < N; i++){
        if(A[i] > A[idx]) dp(i, len + 1);
        else dp(i, 1);
    }
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> A[i];

    dp(0, 1);

    cout << res;

    return 0;
}
