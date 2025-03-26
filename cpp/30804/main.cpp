#include <iostream>
#include <deque>

using namespace std;

int N;

int S[200000];

int res = 1;

void solve(){
    deque<int> kind;
    int start = 0, end = 0;

    kind.push_back(S[0]);

    while(end < N - 1){
        end++;

        if(kind.back() != S[end]){
            if(kind.front() == S[end]) kind.pop_front();

            if(kind.size() == 2){
                for(int i = end - 1; i >= start; i--){
                    if(kind.front() == S[i]){
                        kind.pop_front();
                        start = i + 1;
                        break;
                    }
                }
            }

            kind.push_back(S[end]);
        }

        if(end - start + 1 > res) res = end - start + 1;
    }
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> S[i];

    solve();

    cout << res;

    return 0;
}
