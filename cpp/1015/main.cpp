#include <iostream>
#include <algorithm>

using namespace std;

int N;

pair<int, int> A[50];

int res[50];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A[i].first;
        A[i].second = i;
    }
    
    sort(A, A + N);
    
    for(int i = 0; i < N; i++) res[A[i].second] = i;
    
    for(int i = 0; i < N; i++) cout << res[i] << ' ';
    
    return 0;
}
