#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Subject {
    int c, s;

    vector<int> d, h;
};

int N, M;

int reserved[5][24] = { 0, };

Subject S[10];

map<string, int> week;

bool dfs(int n, int u, int p){
    if(u >= M) return true;

    bool ret = false;

    for(int i = p + 1; i < N && !ret; i++){
        bool flag = true;

        for(int j = 0; j < S[i].s; j++){
            if(++reserved[S[i].d[j]][S[i].h[j]] > 1) flag = false;
        }

        if(flag) ret = dfs(n + 1, u + S[i].c, i);

        for(int j = 0; j < S[i].s; j++) reserved[S[i].d[j]][S[i].h[j]]--;
    }

    return ret;
}

int main()
{
    week["MON"] = 0;
    week["TUE"] = 1;
    week["WED"] = 2;
    week["THU"] = 3;
    week["FRI"] = 4;

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        int c, s, h;
        string d;

        cin >> c >> s;

        S[i].c = c;
        S[i].s = s;

        for(int j = 0; j < s; j++){
            cin >> d >> h;

            int d2 = week[d];

            S[i].d.push_back(d2);
            S[i].h.push_back(h);
        }
    }

    cout << ((dfs(0, 0, -1)) ? "YES" : "NO");

    return 0;
}
