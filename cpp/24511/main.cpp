#include <iostream>
#include <deque>

using namespace std;

int N;

int A[100000];

deque<int> B;

int M;

int C[100000];

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        if(A[i] == 0) B.push_front(t);
    }

    cin >> M;

    for(int i = 0; i < M; i++){
        int t;
        cin >> t;

        B.push_back(t);
    }

    for(int i = 0; i < M; i++){
        cout << B.front() << ' ';
        B.pop_front();
    }

    return 0;
}
