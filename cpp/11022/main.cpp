#include <iostream>
#include <vector>

using namespace std;

int T;

int A, B;

vector<pair<int, int>> res;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> A >> B;

        res.push_back(make_pair(A, B));
    }

    for(int i = 1; i <= T; i++) cout << "Case #" << i << ": " << res[i - 1].first << " + " << res[i - 1].second << " = " << res[i - 1].first + res[i - 1].second << '\n';

    return 0;
}
