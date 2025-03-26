#include <iostream>
#include <vector>

using namespace std;

int V;

vector<pair<int, short>> edge[100001];
bool visited[100001] = { false, };

int res = 0;

int rc(int cur){
    int m1 = 0, m2 = 0;

    visited[cur] = true;

    for(pair<int, short> c: edge[cur]){
        if(!visited[c.first]){
            int t = rc(c.first) + c.second;

            if(t > m1){
                m2 = m1;
                m1 = t;
            } else if(t > m2) m2 = t;
        }
    }

    res = max(res, m1 + m2);

    return m1;
}

int main()
{
    cin >> V;

    for(int i = 0; i < V; i++){
        int n, child, cost;
        cin >> n;

        while(true){
            cin >> child;

            if(child == -1) break;

            cin >> cost;

            edge[n].push_back(make_pair(child, cost));
        }
    }

    rc(1);

    cout << res;

    return 0;
}
