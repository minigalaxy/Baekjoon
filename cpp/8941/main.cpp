#include <iostream>
#include <map>

using namespace std;

int T;

string f;

map<char, double> mass = { { 'C', 12.01 }, { 'H', 1.008 }, { 'O', 16.00 }, { 'N', 14.01 } };

int main()
{
    cout.precision(3);
    cout.setf(ios_base::fixed);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> f;
        
        double m = 0;
        
        for(int i = 0; i < f.size(); i++){
            if(i + 1 < f.size() && '0' <= f[i + 1] && f[i + 1] <= '9'){
                if(i + 2 < f.size() && '0' <= f[i + 2] && f[i + 2] <= '9'){
                    m += mass[f[i]] * stoi(f.substr(i + 1, 2));
                    
                    i++;
                } 
                else m += mass[f[i]] * (f[i + 1] - '0');
                
                i++;
            }
            else m += mass[f[i]];
        }
        
        cout << m << '\n';
    }
    
    return 0;
}
