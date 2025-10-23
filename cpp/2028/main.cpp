#include <iostream>

using namespace std;

int T;

int N;

int sq;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        int sq = N * N;
        bool flag = true;
        
        while(N && flag){
            if(N % 10 != sq % 10) flag = false;
            N /= 10;
            sq /= 10;
        }
        
        cout << (flag ? "YES\n" : "NO\n");
    }
    
    return 0;
}
