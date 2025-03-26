#include <iostream>

using namespace std;

int H, M;

int main()
{
    cin >> H >> M;

    cout << ((M >= 45) ? H : ((H  > 0) ? H - 1 : 23)) << ' ' << ((M >= 45) ? M - 45 : 60 + M - 45);

    return 0;
}
