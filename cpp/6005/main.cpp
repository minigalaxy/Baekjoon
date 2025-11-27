#include <iostream>
#include <algorithm>

using namespace std;

int R;

int X[25][25];

int m[25][25] = { 0, };

int main()
{
    cin >> R;
    
    for(int i = 0; i < R; i++){
        for(int j = 0; j < i + 1; j++){
            cin >> X[i][j];
        }
    }
    
    m[0][0] = X[0][0];
    
    for(int i = 1; i < R; i++){
        for(int j = 0; j < i; j++) m[i][j] = max(m[i][j], m[i - 1][j] + X[i][j]);
        for(int j = 1; j < i + 1; j++) m[i][j] = max(m[i][j], m[i - 1][j - 1] + X[i][j]);
    }
    
    cout << *max_element(m[R - 1], m[R - 1] + R);
    
    return 0;
}
