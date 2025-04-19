#include <iostream>

using namespace std;

char c;

int res = 0;

int main()
{
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            c = getchar();
            
            if(c == 'P') res += 1;
            else if(c == 'p') res -= 1;
            else if(c == 'N') res += 3;
            else if(c == 'n') res -= 3;
            else if(c == 'B') res += 3;
            else if(c == 'b') res -= 3;
            else if(c == 'R') res += 5;
            else if(c == 'r') res -= 5;
            else if(c == 'Q') res += 9;
            else if(c == 'q') res -= 9;
        }
        getchar();
    }
    
    cout << res;
    
    return 0;
}
