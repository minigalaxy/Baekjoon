#include <iostream>
#include <algorithm>

using namespace std;

int N, C;

int x[200000];

int res = 0;

int main()
{
    cin >> N >> C;

    for(int i = 0; i < N; i++) cin >> x[i];

    sort(x, x + N);

    int s = 1, e = x[N - 1] - x[0];

    while(s <= e){
        int m = (s + e) / 2;

        int c = x[0], cnt = 1;

        for(int i = 1; i < N; i++){
            if(x[i] >= c + m){
                c = x[i];
                cnt++;
            }
        }

        if(cnt >= C){
            res = max(res, m);
            s = m + 1;
        } else e = m - 1;
    }

    cout << res;

    return 0;
}
