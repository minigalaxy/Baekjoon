#include <iostream>

using namespace std;


int T;

int Y, K;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int res = 0;
        
        for(int j = 0; j < 9; j++){
            cin >> Y >> K;
            
            res += Y;
            res -= K;
        }
        
        if(res > 0) cout << "Yonsei\n";
        else if(res < 0) cout << "Korea\n";
        else cout << "Draw\n";
    }
    
    return 0;
}
