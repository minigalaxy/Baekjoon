#include <iostream>

using namespace std;

string S;

int p[2] = { -1, -1 };

int main()
{
    cin >> S;

    for(int i = 0; i < S.size(); i++){
        char c = S[i];

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            p[1] = p[0];
            p[0] = i + 1;
        }
    }

    if(S.back() == 'n' || S.back() == 's' || S.back() == 'a' || S.back() == 'e' || S.back() == 'i' || S.back() == 'o' || S.back() == 'u') cout << p[1];
    else cout << p[0];

    return 0;
}
