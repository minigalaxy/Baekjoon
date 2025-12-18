#include <iostream>

using namespace std;

int N;

int L[20], J[20];

int solve(int i, int h){
    if(i == N) return 0;
    
    if(h > L[i]) return max(solve(i + 1, h - L[i]) + J[i], solve(i + 1, h));
    else return solve(i + 1, h);
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> L[i];
    for(int i = 0; i < N; i++) cin >> J[i];
    
    cout << solve(0, 100);
    
    return 0;
}
