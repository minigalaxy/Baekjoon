#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int N, M;

unordered_map<string, string> pw;

string res[100000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    for(int i = 0; i < N; i++){
        string address, password;
        cin >> address >> password;

        pw.insert(make_pair(address, password));
    }

    for(int i = 0; i < M; i++){
        string address;
        cin >> address;

        res[i] = pw[address];
    }

    for(int i = 0; i < M; i++){
        cout << res[i] << '\n';
    }

    return 0;
}
