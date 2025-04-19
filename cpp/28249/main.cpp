#include <iostream>

using namespace std;

int N;

string p;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> p;
        
        if(p[0] == 'P') res += 1500;
        else if(p[0] == 'M') res += 6000;
        else if(p[0] == 'S') res += 15500;
        else if(p[0] == 'C') res += 40000;
        else if(p[0] == 'T') res += 75000;
        else res += 125000;
    }
    
    cout << res;
    
    return 0;
}
