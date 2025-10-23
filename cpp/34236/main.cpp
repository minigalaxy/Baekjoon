#include <iostream>

using namespace std;

int N;

int A[100];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    cout << A[N - 1] + A[1] - A[0];
    
    return 0;
}
