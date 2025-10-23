#include <iostream>

using namespace std;

int n, c;

double a;
string t;

double res[3] = { 0, };

int main()
{
    cin >> n >> c;
    
    for(int i = 0; i < n; i++){
        cin >> a >> t;
        
        res[0] += a;
        
        if(t == "bedroom") res[1] += a;
        
        if(t == "balcony") res[2] += a * c / 2;
        else res[2] += a * c;
    }
    
    cout << res[0] << '\n' << res[1] << '\n';
    
    cout.precision(6);
    cout << fixed;
    
    cout << res[2];
    
    return 0;
}
