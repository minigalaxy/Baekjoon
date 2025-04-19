#include <iostream>

using namespace std;

int by, bm, bd;
int cy, cm, cd;

int main()
{
    cin >> by >> bm >> bd;
    cin >> cy >> cm >> cd;
    
    if(cm == bm){
        if(cd >= bd) cout << cy - by << '\n';
        else cout << max(0, cy - by - 1) << '\n';
    } else cout << ((cm > bm) ? cy - by : max(0, cy - by - 1)) << '\n';
    
    cout << cy - by + 1 << '\n' << cy - by;
    
    return 0;
}
