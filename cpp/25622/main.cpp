#include <iostream>
#include <vector>

using namespace std;

int N;

vector<int> edge[333'334];

int sum[333'334];

int group[111'111][3];
int group_num = 0;

int init(int p, int c){
    sum[c] = 1;

    for(int n: edge[c]){
        if(n != p) sum[c] += init(c, n);
    }

    return sum[c];
}

bool solve(int p, int c, int g, int g2){
    group[g][g2 - 1] = c;

    for(int n: edge[c]){
        if(n != p){
            if(g2 == 3){
                if(sum[n] % 3 == 0){
                    if(!solve(c, n, ++group_num, 1)) return false;
                } else return false;
            } else {
                if(g2 + sum[n] % 3 <= 3){
                    if(!solve(c, n, g, g2 + 1)) return false;

                    g2 += sum[n] % 3;
                } else return false;
            }
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    /*
    for(int i = 0; i < N - 1; i++){
        int u, v;
        cin >> u >> v;

        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    **/

    for(int i = 1; i < N; i++){
        edge[i].push_back(i + 1);
        edge[i + 1].push_back(i);
    }

    init(0, 1);

    if(solve(0, 1, 0, 1)){
        cout << "S\n";

        for(int i = 0; i < N / 3; i++){
            for(int j = 0; j < 3; j++) cout << group[i][j] << ' ';

            cout << '\n';
        }
    } else cout << "U";

    return 0;
}
