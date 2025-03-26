#include <iostream>

using namespace std;

int N;

int x[100000];

bool t[1000001] = { false, };
int score[1000001] = { 0, };

int m = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> x[i];

        t[x[i]] = true;
        m = max(m, x[i]);
    }

    for(int i = 0; i < N; i++){
        for(int j = x[i] * 2; j <= m; j += x[i]){
            if(t[j]){
                score[x[i]]++;
                score[j]--;
            }
        }
    }

    for(int i = 0; i < N; i++) cout << score[x[i]] << ' ';

    return 0;
}
