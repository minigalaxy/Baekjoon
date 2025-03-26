#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int A, B;

vector<pair<int, int>> wire;
vector<int> lis;

int res = 0;

int bs(int l, int r, int v){
    if(l >= r) return r;

    int m = (l + r) / 2;

    if(v < lis[m]) return bs(l, m, v);
    else return bs(m + 1, r, v);
}

int main()
{
    cin >> N;

    for(int i = 1; i <= N; i++){
        cin >> A >> B;

        wire.push_back(make_pair(A, B));
    }

    sort(wire.begin(), wire.end());

    lis.push_back(wire[0].second);

    for(int i = 1; i < wire.size(); i++){
        if(wire[i].second > lis.back()){
            lis.push_back(wire[i].second);
        } else {
            int idx = bs(0, lis.size() - 1, wire[i].second);
            lis[idx] = wire[i].second;
        }
    }

    cout << N - lis.size();

    return 0;
}
