#include <iostream>

using namespace std;

int d, m, y;

int md[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

int main()
{
    while(true){
        cin >> d >> m >> y;
        
        if(d == 0) break;
        
        int res = 0;
        
        for(int i = 0; i < m - 1; i++) res += md[i];
        
        if(m > 2 && (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0))) res++;
    
        res += d;
        
        cout << res << '\n';
    }
    
    return 0;
}
