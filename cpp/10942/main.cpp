#include <iostream>

using namespace std;

int N;

int num[2000];

bool eval[2000][2000] = { false, };

int M;

int S, E;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++) cin >> num[i];

    for(int i = 0, l, r; i < N; i++){
        l = r = i;

        while(l > -1 && r < N){
            if(num[l] == num[r]) eval[l][r] = true;
            else break;

            l--;
            r++;
        }
    }

    for(int i = 0, l, r; i < N - 1; i++){
        l = i;
        r = i + 1;

        while(l > -1 && r < N){
            if(num[l] == num[r]) eval[l][r] = true;
            else break;

            l--;
            r++;
        }
    }

    cin >> M;

    for(int i = 0; i < M; i++){
        cin >> S >> E;

        cout << eval[S - 1][E - 1] << '\n';
    }

    return 0;
}
