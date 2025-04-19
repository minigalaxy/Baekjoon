#include <iostream>

using namespace std;

int n;

int x;

string s;

int q;
double u;

double res;

int main()
{
    cout.precision(2);
    cout.setf(ios_base::fixed);
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        
        res = 0;
        
        for(int j = 0; j < x; j++){
            cin >> s >> q >> u;
            
            res += q * u;
        }
        
        cout << '$' << res << '\n';
    }
    
    return 0;
}
