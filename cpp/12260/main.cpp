#include <iostream>

using namespace std;

int T;

double C, F, X;

int main()
{
    cout.precision(7);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> C >> F >> X;
        
        double s = 0, res = X;
        
        for(int i = 0; i * C <= X; i++){
            res = min(res, s + X / (2 + i * F));
            
            s += C / (2 + i * F);
        }
        
        cout << "Case #" << i + 1 << ": " << fixed << res << '\n';
    }
    
    return 0;
}
