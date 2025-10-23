#include <iostream>

using namespace std;

long long N, M, A, B;

int main()
{
    cin >> N >> M >> A >> B;

    cout << max(0LL, (N * 3 - M) * A + ((N * 3 - M > 0) ? B : 0LL));

    return 0;
}
