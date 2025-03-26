#include <iostream>
#include <string>
#include <vector>

using namespace std;

int T;
int R;
string S;

vector<string> P;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> R >> S;

        string t = "";

        for(int j = 0; j < S.size(); j++){
            for(int k = 0; k < R; k++) t.push_back(S[j]);
        }

        P.push_back(t);
    }

    for(int i = 0; i < T; i++) cout << P[i] << endl;

    return 0;
}
