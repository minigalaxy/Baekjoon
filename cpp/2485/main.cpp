#include <iostream>

using namespace std;

int N;

int tree[100000] = { 0, };

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> tree[i];

    int gcd = tree[1] - tree[0];

    for(int i = 1; i < N - 1; i++){
        int t = tree[i + 1] - tree[i];

        while(t){
            int tmp = t;
            t = gcd % t;
            gcd = tmp;
        }
    }

    for(int i = 0; i < N - 1; i++){
        res += (tree[i + 1] - tree[i] - 1) / gcd;
    }

    cout << res;

    return 0;
}
