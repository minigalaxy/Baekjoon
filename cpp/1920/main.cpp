#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int A[100000], B[100000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    sort(A, A + N);

    cin >> M;

    for(int i = 0; i < M; i++){
        cin >> B[i];
    }

    for(int i = 0; i < M; i++){
        cout << binary_search(A, A + N, B[i]) << '\n';
    }

    return 0;
}
