#include <iostream>

using namespace std;

int TC;

int n, m;

int last;

int dvd[200'000];
int pos[100'001];
int seg[800'000];

int init(int l, int r, int i){
    if(l == r) return seg[i] = (dvd[l] > 0);

    int m = (l + r) / 2;

    return seg[i] = init(l, m, i * 2) + init(m + 1, r, i * 2 + 1);
}

void update(int l, int r, int i, int a, int v){
    seg[i] += v;

    if(l == r) return;

    int m = (l + r) / 2;

    if(a <= m) update(l, m, i * 2, a, v);
    else update(m + 1, r, i * 2 + 1, a, v);
}

int query(int l, int r, int i, int a, int b){
    if(a > r || b < l) return 0;
    if(a <= l && r <= b) return seg[i];

    int m = (l + r) / 2;

    return query(l, m, i * 2, a, b) + query(m + 1, r, i * 2 + 1, a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> TC;

    for(int i = 0; i < TC; i++){
        cin >> n >> m;

        last = n;

        fill(dvd, dvd + 200'000, 0);
        fill(pos, pos + 100'001, 0);
        fill(seg, seg + 800'000, 0);

        for(int j = 0; j < n; j++){
            pos[n - j] = j;
            dvd[j] = n - j;
        }

        init(0, 199'999, 1);

        for(int j = 0; j < m; j++){
            int a;
            cin >> a;

            cout << query(0, 199'999, 1, pos[a] + 1, 199'999) << ' ';

            dvd[pos[a]] = 0;
            update(0, 199'999, 1, pos[a], -1);

            pos[a] = last;
            dvd[pos[a]] = a;
            update(0, 199'999, 1, pos[a], 1);

            last++;
        }

        cout << '\n';
    }

    return 0;
}
