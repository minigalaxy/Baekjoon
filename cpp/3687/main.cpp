#include <iostream>

using namespace std;

int TC;

int n;

int cnt[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };

long long m[101] = { 0, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> TC;

    for(int i = 0; i < TC; i++){
        cin >> n;

        fill(m + 1, m + 101, 1'000'000'000'000'000);

        for(long long j = 1; j < 10; j++) m[cnt[j]] = min(m[cnt[j]], j);

        for(int j = 1; j <= n; j++){
            for(int k = 0; k < 10; k++){
                if(j + cnt[k] <= n) m[j + cnt[k]] = min(m[j + cnt[k]], m[j] * 10 + k);
            }
        }

        cout << m[n] << ' ';

        if(n % 2 == 0){
            for(int j = 0; j < n; j += 2) cout << 1;
        } else {
            cout << 7;

            for(int j = 0; j < n - 3; j += 2) cout << 1;
        }

        cout << '\n';
    }

    return 0;
}
