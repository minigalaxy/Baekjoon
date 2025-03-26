#include <iostream>
#include <string>

using namespace std;

int N;

string S;

int Q;

int l, r;

int score[50][50] = { 0, };

int res;

int main()
{
    cin >> N >> S >> Q;

    for(int i = 0; i < N - 1; i++){
        int j = i, k = i + 1, tmp = 0, len = 1;

        while(j > -1 && k < N){
            score[i][len] = score[i][len - 1];

            if(S[j] == S[k]) score[i][len]++;

            j--;
            k++;
            len++;
        }
    }

    for(int i = 0; i < Q; i++){
        res = 0;

        cin >> l >> r;

        l--;
        r--;

        for(int j = l; j < r; j++) res = max(res, score[j][min(j - l + 1, r - j)]);

        cout << res << '\n';
    }

    return 0;
}
