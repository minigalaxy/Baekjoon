#include <iostream>

using namespace std;

int n;

int theta;

int res = 0;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> theta;

        res += (180 - theta * 2);
    }

    cout << res - 180;

    return 0;
}
