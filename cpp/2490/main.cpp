#include <iostream>

using namespace std;

int s[3][4];

int main()
{
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++) cin >> s[i][j];
        
        int t = s[i][0] + s[i][1] + s[i][2] + s[i][3];
        
        if(t == 3) cout << "A\n";
        else if(t == 2) cout << "B\n";
        else if(t == 1) cout << "C\n";
        else if(t == 0) cout << "D\n";
        else cout << "E\n";
    }
    
    return 0;
}
