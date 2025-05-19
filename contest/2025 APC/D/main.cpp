#include <iostream>

using namespace std;

int N;

int A[3001];

int m[3001];

void dfs(int c, int cnt){
    if(c > N) return;

    for(int i = A[c]; i > 0; i--){
        if(cnt + 1 < m[c + i - 1]){
            m[c + i - 1] = cnt + 1;

            dfs(c + i, cnt + 1);
        }
    }
}

int main()
{
    cin >> N;

    fill(m + 1, m + N + 1, N);

    for(int i = 1; i <= N; i++){
        cin >> A[i];

        A[i] = min(A[i], N - i + 1);
    }

    dfs(1, 0);

    cout << m[N];

    return 0;
}
