#include <iostream>
#include <string>

using namespace std;

int Q;

string S;

int main()
{
    cin >> Q;

    for(int i = 0; i < Q; i++){
        int res = 0;

        cin >> S;

        for(int j = 0; j < int(S.size()) - 2; j++){
            if(S[j] == 'W'){
                if(S[j + 1] == 'O' && S[j + 2] == 'W'){
                    res++;
                    j++;
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}
