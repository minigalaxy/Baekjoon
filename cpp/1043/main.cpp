#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;

int know_n;

int party_n[50];
int party[50][50];

int parent[51];

int res;

int _find(int a){
    if(a != parent[a]) return parent[a] = _find(parent[a]);
    else return a;
}

void _union(int a, int b){
    int ra = _find(a);
    int rb = _find(b);

    if(ra != rb){
        if(ra < rb) parent[rb] = ra;
        else parent[ra] = rb;
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 1; i <= N; i++) parent[i] = i;

    cin >> know_n;

    for(int i = 0; i < know_n; i++){
        int t;
        cin >> t;

        parent[t] = 0;
    }

    for(int i = 0; i < M; i++){
        cin >> party_n[i] >> party[i][0];

        for(int j = 1; j < party_n[i]; j++){
            cin >> party[i][j];

            _union(party[i][0], party[i][j]);
        }
    }

    res = M;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < party_n[i]; j++){
            if(_find(party[i][j]) == 0){
                res--;
                break;
            }
        }
    }

    cout << res;

    return 0;
}
