#include <iostream>
#include <algorithm>

using namespace std;

int N;

pair<int, int> pos[100001];

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> pos[i].second >> pos[i].first;
    }

    sort(pos, pos + N);

    for(int i = 0; i < N; i++){
        cout << pos[i].second << ' ' << pos[i].first << '\n';
    }

    return 0;
}
