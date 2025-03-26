#include <iostream>
#include <vector>

using namespace std;

int T;

vector<int> r;

int p[15][14];

int main()
{
    for(int i = 0; i < 14; i++) p[0][i] = i + 1;

    for(int i = 1; i < 15; i++){
        int s = 0;

        for(int j = 0; j < 14; j++){
            s += p[i - 1][j];
            p[i][j] = s;
        }
    }

    cin >> T;

    for(int i = 0; i < T; i++){
        int k, n;
        cin >> k >> n;

        r.push_back(p[k][n - 1]);
    }

    for(int t: r) cout << t << endl;

    return 0;
}
