#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int N, M;

map<string, int> cnt;

bool compare(pair<string, int> a, pair<string, int> b){
    if(a.second == b.second){
        return a.first.size() > b.first.size();
    }
    return a.second > b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        string t;
        cin >> t;

        if(t.size() >= M) cnt[t]++;
    }

    vector<pair<string, int>> word(cnt.begin(), cnt.end());

    stable_sort(word.begin(), word.end(), compare);

    for(pair<string, int> w: word) cout << w.first << '\n';

    return 0;
}
