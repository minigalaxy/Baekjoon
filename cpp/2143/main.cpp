#include <iostream>
#include <unordered_map>

using namespace std;

int T;

int n, m;

int A[1001], B[1001];
int SA[1001] = { 0, }, SB[1001] = { 0, };

unordered_map<int, int> memory;

long long res = 0;

int main()
{
    cin >> T;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> A[i];
        SA[i] = SA[i - 1] + A[i];
    }

    cin >> m;

    for(int i = 1; i <= m; i++){
        cin >> B[i];
        SB[i] = SB[i - 1] + B[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            int RA = SA[j] - SA[i] + A[i];

            memory[T - RA]++;
        }
    }
    for(int i = 1; i <= m; i++){
        for(int j = i; j <= m; j++){
            int RB = SB[j] - SB[i] + B[i];

            res += memory[RB];
        }
    }

    cout << res;

    return 0;
}
