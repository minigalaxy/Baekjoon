#include <iostream>
#include <unordered_map>

using namespace std;

int n;

int T;

long long N;

unordered_map<long long, int> cnt;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> T;

        cnt.clear();

        long long mx = 0;

        for(int j = 0; j < T; j++){
            cin >> N;

            if(++cnt[N] > cnt[mx]) mx = N;
        }

        if(cnt[mx] > T / 2) cout << mx << '\n';
        else cout << "SYJKGW" << '\n';
    }

    return 0;
}
