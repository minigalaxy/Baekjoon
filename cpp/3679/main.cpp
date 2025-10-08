#include <iostream>
#include <algorithm>

using namespace std;

int c;

int n;

struct vertex{
    int num;
    int x, y;
    bool operator < (const vertex &o) const {
        return x < o.x || (x == o.x && y < o.y);
    }
};

vertex v[2000];

int ccw(vertex o, vertex a, vertex b){
    int t = (a.x - o.x) * (b.y - o.y) - (b.x - o.x) * (a.y - o.y);

    if(t > 0) return 1; // ccw
    if(t < 0) return -1; // cw
    return 0; // line
}

int dist(vertex a, vertex b){
    return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> c;

    for(int i = 0; i < c; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> v[j].x >> v[j].y;
            v[j].num = j;
        }

        swap(v[0], *min_element(v, v + n));

        sort(v + 1, v + n, [&](vertex a, vertex b){
            int t = ccw(v[0], a, b);

            if(t == 1) return true;
            if(t == 0) return dist(v[0], a) < dist(v[0], b);
            return false;
        });

        cout << v[0].num << ' ' << v[1].num;

        bool f = false;

        for(int j = 2; j < n - 1; j++){
            if(ccw(v[0], v[n - 1], v[j]) == 0){
                for(int k = n - 1; k >= j; k--){
                    cout << ' ' << v[k].num;
                }

                f = true;

                break;
            }

            cout << ' ' << v[j].num;
        }

        if(!f) cout << ' ' << v[n - 1].num;

        cout << '\n';
    }

    return 0;
}
