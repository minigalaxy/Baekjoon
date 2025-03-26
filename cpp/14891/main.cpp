#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gear[4][8]; // N = False, S = True

void g_rotate(int n, int d, int k){
    if(k != -1){
        if(n < 3){
            if(gear[n][2] != gear[n + 1][6]){
                g_rotate(n + 1, -d, 1);
            }
        }
    }
    if(k != 1){
        if(n > 0){
            if(gear[n][6] != gear[n - 1][2]){
                g_rotate(n - 1, -d, -1);
            }
        }
    }

    if(d == 1) rotate(begin(gear[n]), end(gear[n]) - 1, end(gear[n]));
    else rotate(begin(gear[n]), begin(gear[n]) + 1, end(gear[n]));
}

int main()
{
    int k;

    int n[100],d[100];


    for(int i = 0; i < 4; i++){
        string s;

        cin >> s;

        for(int j = 0; j < 8; j++){
            gear[i][j] = s[j] - '0';
        }
    }

    cin >> k;

    for(int i = 0; i < k; i++){
        int t;
        cin >> t >> d[i];
        n[i] = t - 1;
    }

    for(int i = 0; i < k; i++){
        g_rotate(n[i], d[i], 0);
    }

    cout << gear[0][0] + 2 * gear[1][0] + 4 * gear[2][0] + 8 * gear[3][0];
}
