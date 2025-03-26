#include <iostream>

using namespace std;

int main()
{
    int r = 0, t;

    for(int i = 0; i < 5; i++){
        cin >> t;

        r += t * t;
    }

    cout << r % 10;

    return 0;
}
