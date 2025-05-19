#include <iostream>

using namespace std;

int N;

pair<int, int> mn[2] = { { 1'000'000'000, 1'000'000'000 }, { 1'000'000'000, 1'000'000'000 } };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;

        mn[0] = min(mn[0], { x, y });
    }
    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;

        mn[1] = min(mn[1], { x, y });
    }

    cout << mn[1].first - mn[0].first << ' ' << mn[1].second - mn[0].second;

    return 0;
}
