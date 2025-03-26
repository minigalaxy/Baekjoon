#include <iostream>
#include <unordered_map>

using namespace std;

int T, n;

unordered_map<string, int> clothes;
int cnt[30];

int res[100] = { 0, };

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        clothes.clear();

        cin >> n;

        for(int j = 0; j < n; j++){
            string n, t;
            cin >> n >> t;

            clothes[t]++;
        }

        int r = 1;
        for(auto p: clothes) r *= p.second + 1;

        res[i] = r - 1;
    }

    for(int i = 0; i < T; i++) cout << res[i] << '\n';

    return 0;
}
