#include <iostream>
#include <string>

using namespace std;

string S;

int q;

char a;
int l, r;

int psum[26][200001] = { 0, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> S;

    for(int i = 1; i <= S.size(); i++){
        for(int j = 0; j < 26; j++){
            psum[j][i] = psum[j][i - 1];
        }
        psum[S[i - 1] - 'a'][i]++;
    }

    cin >> q;

    for(int i = 0; i < q; i++){
        cin >> a >> l >> r;

        cout << psum[a - 'a'][r + 1] - psum[a - 'a'][l] << '\n';
    }

    return 0;
}
