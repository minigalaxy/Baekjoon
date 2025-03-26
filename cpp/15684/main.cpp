#include <iostream>
#include <vector>

using namespace std;

int N, M, H;

bool l[9][30] = { false, };

vector<int> px;
vector<int> py;
int pc = 0;

vector<int> t;

int r = 4;

bool chk()
{
    for(int i = 0; i < N; i++){
        int x = i;
        int y = 0;

        for(int j = 0; j < H; j++){
            if((x > 0) && (l[x - 1][y])) x--;
            else if((x < N - 1) && (l[x][y])) x++;

            y++;
        }

        if(x != i){
            return false;
        }
    }

    return true;
}

void comb(int c, int s, int d)
{
    if(d >= r) return;

    if(c > d){
        for(int i = 0; i < t.size(); i++){
            l[px[t[i]]][py[t[i]]] = true;
        }

        if(chk()){
            r = d;
        }

        for(int i = 0; i < t.size(); i++){
            l[px[t[i]]][py[t[i]]] = false;
        }


        return;
    }

    for(int i = s + 1; i < pc; i++){
        t.push_back(i);
        comb(c + 1, i, d);
        t.pop_back();
    }
}

int main()
{
    cin >> N >> M >> H;

    for(int i = 0; i < M; i++){
        int a, b;

        cin >> a >> b;

        a--;
        b--;

        l[b][a] = true;
    }

    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < H; j++){
            if(!(((i > 0) && (l[i - 1][j])) || ((i < N - 2) && (l[i + 1][j])) || (l[i][j]))){
                px.push_back(i);
                py.push_back(j);
                pc++;
            }
        }
    }



    for(int i = 0; i < 4; i++){
        comb(1, -1, i);
        t.clear();
    }

    if(r > 3) r = -1;

    cout << r;

    return 0;
}
