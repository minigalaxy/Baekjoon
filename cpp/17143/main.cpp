#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dr[4] = { -1, 1, 0, 0 };
int dc[4] = { 0, 0, 1, -1 };

int R, C, M;

struct sh{
    int r;
    int c;
    int s;
    int d;
    int z;
};

vector<sh> sl;

int res = 0;

bool compare(sh a, sh b){
    if(a.c == b.c){
        if(a.r == b.r) return a.z > b.z;
        return a.r < b.r;
    }
    return a.c < b.c;
}

int main()
{
    cin >> R >> C >> M;

    for(int i = 0; i < M; i++){
        int r, c, s, d, z;

        cin >> r >> c >> s >> d >> z;

        sl.push_back({ r - 1, c - 1, s, d - 1, z });
    }

    sort(sl.begin(), sl.end(), compare);

    int c = 0;
    int t = sl.size();

    while(c < C){
        for(int i = 0; i < t; i++){
            if(sl[i].c == c){
                res += sl[i].z;
                sl.erase(sl.begin() + i);
                t--;

                break;
            }
            if(sl[i].c > c) break;
        }

        for(int i = 0; i < t; i++){
            int nr = dr[sl[i].d];
            int nc = dc[sl[i].d];

            for(int j = 0; j < sl[i].s % ((R - 1) * 2); j++){
                if(sl[i].r + nr < 0 || sl[i].r + nr > R - 1){
                    nr *= -1;
                    sl[i].d = 1 - sl[i].d;
                }
                sl[i].r += nr;
            }
            for(int j = 0; j < sl[i].s % ((C - 1) * 2); j++){
                if(sl[i].c + nc < 0 || sl[i].c + nc > C - 1){
                    nc *= -1;
                    sl[i].d = 5 - sl[i].d;
                }
                sl[i].c += nc;
            }
        }

        sort(sl.begin(), sl.end(), compare);

        for(int i = 0; i < t - 1; i++){
            for(int j = i + 1; j < t; j++){
                if(sl[i + 1].c == sl[i].c && sl[i + 1].r == sl[i].r){
                    sl.erase(sl.begin() + i + 1);
                    t--;
                } else break;
            }
        }

        c++;
    }

    cout << res;

    return 0;
}
