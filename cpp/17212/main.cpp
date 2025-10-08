#include <iostream>

using namespace std;

int N;

int m[100'001];

int main()
{
    cin >> N;

    fill(m, m + N + 1, 100'000);

    m[N] = 0;

    for(int i = N; i >= 0; i--){
        if(i >= 1) m[i - 1] = min(m[i - 1], m[i] + 1);
        if(i >= 2) m[i - 2] = min(m[i - 2], m[i] + 1);
        if(i >= 5) m[i - 5] = min(m[i - 5], m[i] + 1);
        if(i >= 7) m[i - 7] = min(m[i - 7], m[i] + 1);
    }

    cout << m[0];

    return 0;
}
