#include <iostream>
#include <vector>

using namespace std;

int T;

int A, B;

vector<int> res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> A >> B;

        res.push_back(A + B);
    }

    for(int t: res) cout << t << '\n';

    return 0;
}
