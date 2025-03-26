#include <iostream>

using namespace std;

int n;

int b[100000];

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) cin >> b[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 256; j++){
            if(b[i] == (j ^ ((j << 1) % 256))){
                cout << j << ' ';
                break;
            }
        }
    }

    return 0;
}
