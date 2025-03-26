#include <iostream>
#include <algorithm>

using namespace std;

int N;
int P[1000];

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> P[i];

    sort(P, P + N);

    for(int i = 0; i < N; i++){
        res += P[i] * (N - i);
    }

    cout << res;

    return 0;
}
