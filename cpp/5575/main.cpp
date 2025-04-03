#include <iostream>

using namespace std;

int t[3][6];

int main()
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++) cin >> t[i][j];
    }
    
    for(int i = 0; i < 3; i++){
        t[i][1] += t[i][0] * 60;
        t[i][2] += t[i][1] * 60;
        
        t[i][4] += t[i][3] * 60;
        t[i][5] += t[i][4] * 60;
        
        t[i][5] -= t[i][2];
    }
    
    for(int i = 0; i < 3; i++){
        cout << t[i][5] / 3600 << ' ';
        t[i][5] %= 3600;
        cout << t[i][5] / 60 << ' ';
        t[i][5] %= 60;
        cout << t[i][5] << '\n';
    }
    
    return 0;
}
