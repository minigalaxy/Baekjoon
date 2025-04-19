#include <iostream>

using namespace std;

int h, w;

int c[2] = { 0, 0 };

int main()
{
    cin >> h >> w;
    cin.ignore();
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++) c[getchar() - '0']++;
        getchar();
    }
    
    cout << min(c[0], c[1]);
    
    return 0;
}
