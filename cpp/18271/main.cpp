#include <iostream>

using namespace std;

int N;

int S[2] = { 0, 0 };

int T = 1;

int TO = 0;

int stk = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int G;
        cin >> G;
        
        G--;
        
        if(stk != 0){
            if(((G * 2) - 1) * stk > 0) stk += (G ? 1 : -1);
            else {
                if((S[1] - S[0]) * stk > 0) TO = max(TO, abs(stk));
                stk = 0;
            }
        }
        if(stk == 0){
            if(S[G] < S[!G]) stk = (G ? 1 : -1);
        }
        
        S[G]++;
        
        if(S[0] == S[1]) T++;
    }
    
    if((S[1] - S[0]) * stk > 0) TO = max(TO, abs(stk));
    
    cout << S[0] << ' ' << S[1] << '\n' << T << '\n' << TO;
    
    return 0;
}
