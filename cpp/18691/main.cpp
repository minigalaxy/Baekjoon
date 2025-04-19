#include <iostream>

using namespace std;

int T;

int G, C, E;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> G >> C >> E;

        cout << max(0, (E - C) * (G * 2 - 1)) << '\n';
    }

    return 0;
}
