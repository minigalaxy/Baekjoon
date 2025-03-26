#include <iostream>

using namespace std;

int N;

int cost[100000];
int dist[100000];

long long res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N - 1; i++) cin >> dist[i];
    for(int i = 0; i < N; i++) cin >> cost[i];

    int i = 0, t = 1000000000;

    while(i < N - 1){
        t = min(t, cost[i]);
        res += 1LL * dist[i] * t;
        i++;
    }

    cout << res;

    return 0;
}
