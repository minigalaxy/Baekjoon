#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int N, M;

unordered_map<int, int> card_count;
int target_card[500000];

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        if(card_count.count(t) > 0) card_count[t]++;
        else card_count.insert(make_pair(t, 1));
    }

    cin >> M;

    for(int i = 0; i < M; i++) cin >> target_card[i];

    for(int i = 0; i < M; i++){
        if(card_count.count(target_card[i]) > 0) cout << card_count[target_card[i]];
        else cout << 0;
        cout << ' ';
    }

    return 0;
}
