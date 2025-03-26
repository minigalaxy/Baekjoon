#include <iostream>

using namespace std;

int dice[3];

int main()
{
    cin >> dice[0] >> dice[1] >> dice[2];

    if(dice[0] == dice[1] && dice[1] == dice[2]) cout << 10000 + dice[0] * 1000;
    else if(dice[0] == dice[1]) cout << 1000 + dice[0] * 100;
    else if(dice[1] == dice[2]) cout << 1000 + dice[1] * 100;
    else if(dice[0] == dice[2]) cout << 1000 + dice[2] * 100;
    else cout << max(dice[0], max(dice[1], dice[2])) * 100;

    return 0;
}
