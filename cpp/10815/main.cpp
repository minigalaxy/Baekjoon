#include <iostream>
#include <set>

using namespace std;

int N , M;

set<int> card;
int target[500000];

bool res[500000];

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        card.insert(t);
    }

    cin >> M;

    for(int i = 0; i < M; i++){
        int t;
        cin >> t;

        res[i] = (card.find(t) != card.end());
    }

    for(int i = 0; i < M; i++) cout << res[i] << ' ';

    return 0;
}
