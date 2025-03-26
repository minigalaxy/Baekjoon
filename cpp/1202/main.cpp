#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

struct gem
{
    int M, V;
};

int N, K;

gem g[300000];
multiset<int> C;

bool visited[300000] = { false, };

long long res = 0;

bool compare(gem a, gem b){
    if(a.V == b.V) return a.M > b.M;
    else return a.V > b.V;
}

int main()
{
    cin >> N >> K;

    for(int i = 0; i < N; i++) cin >> g[i].M >> g[i].V;

    for(int i = 0; i < K; i++){
        int c;
        cin >> c;

        C.insert(c);
    }

    sort(g, g + N, compare);

    for(int i = 0; i < N && !C.empty(); i++){
        auto idx = C.lower_bound(g[i].M);

        if(idx != C.end()){
            res += g[i].V;
            C.erase(idx);
        }
    }

    cout << res;

    return 0;
}
