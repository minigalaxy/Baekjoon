#include <iostream>

using namespace std;

int h, w;

int main()
{
    cin >> h >> w;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}
