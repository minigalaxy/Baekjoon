#include <iostream>
#include <string>

using namespace std;

string S;

int res = 0;

int main()
{
    cin >> S;

    for(int i = 0; i < S.size(); i++){
        if(S[i] == ',') res++;
    }

    cout << res + 1;

    return 0;
}
