#include <iostream>

using namespace std;

string S;

int c = 0;

int res = 0;

int main()
{
    cin >> S;

    for(int i = 0; i < S.size() - 1; i++){
        if(S[i] == '('){
            if(S[i + 1] == ')'){
                res += c;

                i++;
            } else {
                res++;

                c++;
            }
        } else c--;
    }

    cout << res;

    return 0;
}
