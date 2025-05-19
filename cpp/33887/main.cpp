#include <iostream>

using namespace std;

int T;

int X;

bool b[30];

bool chk(int x){
    int i = 0;
    
    while(x > 0){
        b[i++] = x & 1;
        x = x >> 1;
    }

    for(int j = 0; j < i / 2; j++){
        if(b[j] != b[i - j - 1]) return false;
    }

    return true;
}

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> X;

        int res = 0;

        while(true){
            if(chk(X + res)) break;
            if(X - res > 0 && chk(X - res)) break;
            
            res++;
        }

        cout << res << '\n';
    }

    return 0;
}
