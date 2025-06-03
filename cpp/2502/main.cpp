#include <iostream>

using namespace std;

int D, K;

int m[31][2] = { 0, };

int main()
{
    cin >> D >> K;
    
    m[1][0] = 1;
    m[2][1] = 1;
    
    for(int i = 3; i <= D; i++){
        m[i][0] = m[i - 1][0] + m[i - 2][0];
        m[i][1] = m[i - 1][1] + m[i - 2][1];
    }
    
    for(int i = m[D][0]; i <= K; i += m[D][0]){
        if((K - i) % m[D][1] == 0){
            cout << i / m[D][0] << '\n' << (K - i) / m[D][1];
            
            return 0;
        }
    }
    
    return 0;
}
