#include <iostream>

using namespace std;

string C = "SciComLove";

string S;

int res = 0;

int main()
{
    cin >> S;

    for(int i = 0; i < 10; i++){
        if(C[i] != S[i]) res++;
    }

    cout << res;

    return 0;
}
