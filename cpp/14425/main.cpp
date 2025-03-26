#include <iostream>
#include <set>
#include <string>

using namespace std;

int N, M;

set<string> S;

int res = 0;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        string t;
        cin >> t;

        S.insert(t);
    }

    for(int i = 0; i < M; i++){
        string t;
        cin >> t;

        if(S.find(t) != S.end()) res++;
    }

    cout << res;

    return 0;
}
