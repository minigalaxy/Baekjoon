#include <iostream>

using namespace std;

bool n[28] = { false, };

int main()
{
    for(int i = 0; i < 28; i++){
        int t;
        cin >> t;

        n[t - 1] = true;
    }

    for(int i = 0; i < 30; i++){
        if(!n[i]) cout << i + 1 << '\n';
    }

    return 0;
}
