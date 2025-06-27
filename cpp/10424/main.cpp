#include <iostream>
#include <algorithm>

using namespace std;

int N;

pair<int, int> G[100'000];

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        G[i].second = i;

        cin >> G[i].first;
    }

    sort(G, G + N);



    return 0;
}
