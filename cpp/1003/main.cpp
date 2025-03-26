#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int T, N;
vector<pair<int, int>> res;

unordered_map<int, pair<int, int>> dict;

pair<int, int> fibonacci(int n, int cnt_0, int cnt_1) {
    if(dict.find(n) != dict.end()){
        cnt_0 += dict[n].first;
        cnt_1 += dict[n].second;
        return { cnt_0, cnt_1 };
    } else {
        pair<int, int> tmp1 = fibonacci(n - 1, cnt_0, cnt_1);
        pair<int, int> tmp2 = fibonacci(n - 2, cnt_0, cnt_1);

        dict.insert(make_pair(n, make_pair(tmp1.first + tmp2.first, tmp1.second + tmp2.second)));

        return { tmp1.first + tmp2.first, tmp1.second + tmp2.second };
    }
}

int main()
{
    dict.insert(make_pair(0, make_pair(1, 0)));
    dict.insert(make_pair(1, make_pair(0, 1)));

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;

        res.push_back(fibonacci(N, 0, 0));
    }

    for(int i = 0; i < T; i++){
        cout << res[i].first << ' ' << res[i].second << '\n';
    }

    return 0;
}
