#include <iostream>
#include <stack>

using namespace std;

int T;

int s, n;

int x[100'000];

int pl[100'000];

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> s >> n;

        for(int j = 0; j < n; j++) cin >> x[j];

        if(n <= s) cout << s << '\n';
        else {
            bool flag = true;

            int l = 0, r = s - 1, cnt = 0;

            for(int j = 0; j <= r; j++){
                if(!pl[x[j]]) cnt++;

                pl[x[j]]++;
            }

            while(cnt < s && r < n - 1 && l < s){
                if(!pl[x[r + 1]]){
                    if(--pl[x[l++]] == 0) cnt--;
                    if(pl[x[++r]]++ == 0) cnt++;
                } else {
                    flag = true;
                    break;
                }
            }

            if(cnt == s)
        }
    }

    return 0;
}
