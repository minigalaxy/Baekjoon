#include <iostream>

using namespace std;

int h;

int main()
{
    cin >> h;

    if(h == 0) cout << 1;
    else if(h == 1) cout << 0;
    else {
        if(h % 2 == 1){
            cout << 4;
            h--;
        }

        for(int i = 0; i < h / 2; i++) cout << 8;
    }

    return 0;
}
