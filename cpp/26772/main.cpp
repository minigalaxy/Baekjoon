#include <iostream>

using namespace std;

int n;

string h[9] = {
" @@@   @@@  ",
"@   @ @   @ ",
"@    @    @ ",
"@         @ ",
" @       @  ",
"  @     @   ",
"   @   @    ",
"    @ @     ",
"     @      "
};

int main()
{
    cin >> n;
    
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < n; j++) cout << h[i];
        cout << '\n';
    }
    
    return 0;
}
