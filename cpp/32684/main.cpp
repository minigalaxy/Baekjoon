#include <iostream>

using namespace std;

int n[6][2];

int main()
{
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 6; j++) cin >> n[j][i];
    }
    
    if(n[0][0] * 13 + n[1][0] * 7 + n[2][0] * 5 + n[3][0] * 3 + n[4][0] * 3 + n[5][0] * 2 > n[0][1] * 13 + n[1][1] * 7 + n[2][1] * 5 + n[3][1] * 3 + n[4][1] * 3 + n[5][1] * 2 + 1.5) cout << "cocjr0208";
    else cout << "ekwoo";
    
    return 0;
}
