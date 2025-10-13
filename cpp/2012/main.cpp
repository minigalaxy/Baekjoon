#include <iostream>
#include <algorithm>

using namespace std;

int N;

int p[500'000];

long long res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> p[i];
    
    sort(p, p + N);
    
    for(int i = 1; i <= N; i++){
        res += abs(p[i - 1] - i);
    }
    
    cout << res;
    
    return 0;
}
