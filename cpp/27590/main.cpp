#include <iostream>

using namespace std;

int ds, ys, dm, ym;

int tmp;

int main()
{
    cin >> ds >> ys >> dm >> ym;
    
    ds *= -1;
    dm *= -1;
    
    while(ds != dm){
        if(ds < dm) ds += ys;
        else dm += ym;
    }
    
    cout << ds;
    
    return 0;
}
