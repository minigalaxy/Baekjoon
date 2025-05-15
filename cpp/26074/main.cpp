#include <iostream>

using namespace std;

int N, M;

int P[8];

int main()
{
    cin >> N >> M;

    for(int i = 0; i < 8; i++) cin >> P[i];

    cout << (((N == 1 && M == 2) || (N == 2 && M == 1)) ? "ChongChong" : "GomGom");

    return 0;
}
