#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int N, M;

string res[500000];
int c = 0;

unordered_map<string, bool> dict;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        string tmp;
        cin >> tmp;

        dict.insert(make_pair(tmp, true));
    }

    for(int i = 0; i < M; i++){
        string tmp;
        cin >> tmp;

        if(dict.find(tmp) != dict.end()) res[c++] = tmp;
    }

    sort(res, res + c);

    cout << c << '\n';
    for(int i = 0; i < c; i++) cout << res[i] << '\n';

    return 0;
}
