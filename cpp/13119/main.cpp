#include <iostream>

using namespace std;

int N, M, X;

int H[200000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M >> X;

    for(int i = 0; i < M; i++) cin >> H[i];

    for(int i = N; i > 0; i--){
        for(int j = 1; j <= M; j++){
            if(i <= H[j - 1]){
                if(i == X) cout << '*';
                else cout << '#';
            } else {
                if(i == X) cout << '-';
                else if(i < X && j % 3 == 0) cout << '|';
                else cout << '.';
            }
        }

        cout << '\n';
    }

    return 0;
}
