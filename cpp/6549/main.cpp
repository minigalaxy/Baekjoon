#include <iostream>
#include <stack>

using namespace std;

int n;

int h[100000];

long long res;

stack<int> S;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while(true){
        res = 0;

        cin >> n;

        if(n == 0) break;

        for(int i = 0; i < n; i++){
            cin >> h[i];
        }

        for(int i = 0; i < n; i++){
            while(!S.empty() && h[i] < h[S.top()]){
                int t = h[S.top()];
                S.pop();

                res = max(res, 1LL * ((S.empty()) ? i : (i - 1 - S.top())) * t);
            }

            S.push(i);
        }

        while(!S.empty()){
            int t = h[S.top()];
            S.pop();

            res = max(res, 1LL * ((S.empty()) ? n : (n - 1 - S.top())) * t);
        }

        cout << res << '\n';
    }

    return 0;
}
