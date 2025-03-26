#include <iostream>

using namespace std;

int c;

int main()
{
    for(int i = 0; i < 6; i++){
        int t;
        cin >> t;

        c += t;
    }

    cout << c * 5;

    return 0;
}
