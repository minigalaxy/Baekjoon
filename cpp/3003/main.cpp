#include <iostream>

using namespace std;

int f_cnt[6];

int cnt[6] = { 1, 1, 2, 2, 2, 8 };

int main()
{
    for(int i = 0; i < 6; i++) cin >> f_cnt[i];

    for(int i = 0; i < 6; i++) cout << cnt[i] - f_cnt[i] << ' ';

    return 0;
}
