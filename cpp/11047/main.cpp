#include <iostream>

using namespace std;

int N, K;
int val[10];

int cost = 0, cnt = 0;

int greedy(int t){
    if(cost == K) return cnt;
    if(t >= N) return -1;

    for(int i = (K - cost) / val[t]; i > -1; i--){
        cnt += i;
        cost += val[t] * i;

        int tmp = greedy(t + 1);

        if(tmp != -1) return tmp;

        cnt -= i;
        cost -= val[t] * i;
    }
}

int main()
{
    cin >> N >> K;

    for(int i = N - 1; i > -1; i--){
        cin >> val[i];
    }

    cout << greedy(0);

    return 0;
}
