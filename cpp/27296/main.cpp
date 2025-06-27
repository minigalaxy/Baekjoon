#include <iostream>

using namespace std;

int T;

int N;

int m[100'001] = { 1, 1, 0, 1, 0, 0, 0, 1, 0, };

int dp(int c){
    if(m[c] == -1){
        m[c] = 0;

        for(int i = 0; i <= c - 1; i++){
            m[c] += dp(i) * dp(c - 1 - i);
            m[c] &= 1;
        }
    }

    return m[c];
}

int main()
{
    fill(m + 10, m + 100'001, -1);

    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;

        if(N < 2) cout << "1 0\n";
        else {
            dp(N - 2);

            cout << !m[N - 2] << ' ' << m[N - 2] << '\n';
        }
    }

    return 0;
}
