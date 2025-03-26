#include <iostream>

using namespace std;

int r = 0, t, n;

int main()
{
    for(int i = 0; i < 9; i++){
        cin >> t;

        if(t > r){
            r = t;
            n = i + 1;
        }
    }

    cout << r << endl << n;

    return 0;
}
