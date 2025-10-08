#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, C;

vector<pair<long long, int>> money;

long long sum[20] = { 0, };

int main()
{
    cin >> N >> C;

    for(int i = 0; i < N; i++){
        int V, B;
        cin >> V >> B;

        money.push_back({ V, B });
    }

    sort(money.begin(), money.end());

    for(int i = N - 1; i > -1; i--){
        if()
    }

    cout << 0;

    return 0;
}
