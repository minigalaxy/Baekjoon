#include <iostream>
#include <vector>

using namespace std;

int N, M;
int res = 9999;

vector<int> hx, hy;
vector<int> cx, cy;

int hn, cn;

bool ec[100];

int cal(){
    int r = 0;

    for(int i = 0; i < hn; i++){
        int td = 100;

        for(int j = 0; j < cn; j++){
            if(ec[j]) continue;

            int d = abs(hx[i] - cx[j]) + abs(hy[i] - cy[j]);

            if(td > d){
                td = d;
            }
        }

        r += td;
    }

    return r;
}

void dfs(int d, int s){
    if(d > cn - M){
        int r = cal();

        if(res > r) res = r;

        return;
    }

    for(int i = s + 1; i < cn; i++){
        ec[i] = true;
        dfs(d + 1, i);
        ec[i] = false;
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int t;

            cin >> t;

            if(t == 1){
                hx.push_back(j);
                hy.push_back(i);
                hn++;
            } else if(t == 2){
                cx.push_back(j);
                cy.push_back(i);
                cn++;
            }
        }
    }

    dfs(1, -1);

    cout << res;

    return 0;
}
