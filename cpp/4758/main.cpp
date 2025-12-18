#include <iostream>

using namespace std;

double spd;
int wgh, str;

int main()
{
    while(true){
        cin >> spd >> wgh >> str;
        
        if(spd + wgh + str == 0) break;
        
        bool f = false;
        
        if(spd <= 4.5 && wgh >= 150 && str >= 200){
            cout << "Wide Receiver ";
            f = true;
        }
        if(spd <= 6.0 && wgh >= 300 && str >= 500){
            cout << "Lineman ";
            f = true;
        }
        if(spd <= 5.0 && wgh >= 200 && str >= 300){
            cout << "Quarterback";
            f = true;
        }
        
        if(!f) cout << "No positions";
        
        cout << '\n';
    }
    return 0;
}
