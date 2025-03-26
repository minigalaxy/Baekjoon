#include <iostream>
#include <vector>

using namespace std;

int N;

int K = 0;

vector<pair<int, int>> res;

void rec(int s, int e, int n){
    if(n == 1){
        res.push_back(make_pair(s, e));
        return;
    }

    int m;

    if((s == 2 && e == 3) || (s == 3 && e == 2)) m = 1;
    else if((s == 1 && e == 3) || (s == 3 && e == 1)) m = 2;
    else m = 3;

    rec(s, m, n - 1);

    res.push_back(make_pair(s, e));

    rec(m, e, n - 1);
}

int main()
{
    cin >> N;

    rec(1, 3, N);

    cout << res.size() << '\n';

    for(pair<int, int> p: res) cout << p.first << ' ' << p.second << '\n';

    return 0;
}
