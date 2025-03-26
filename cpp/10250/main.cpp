#include <iostream>
#include <vector>

using namespace std;

int T;
int H, W, N;

vector<int> r;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> H >> W >> N;

        r.push_back((((N - 1) % H) + 1) * 100 + (N - 1) / H + 1);
    }

    for(int t: r) cout << t << endl;

    return 0;
}
