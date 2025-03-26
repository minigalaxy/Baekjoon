#include <iostream>

using namespace std;

int T;

int m, d, w;

int main()
{
    cin >> T;

    for(int x = 1; x <= T; x++){
        int y = 0;

        cin >> m >> d >> w;

        for(int i = 0, tmp = 0; i < m; i++){
            tmp += d;
            y += tmp / w;
            tmp %= w;

            if(tmp > 0) y++;
        }

        cout << "Case #" << x << ": " << y << '\n';
    }

    return 0;
}
