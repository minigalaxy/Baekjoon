#include <iostream>

using namespace std;

string s;

int res = 0;

int main()
{
    cin >> s;
    
    int i = 0;
    
    while(i < s.size()){
        i = s.find("DKSH", i);
        
        if(i == -1) i = s.size();
        else {
            i += 4;
            res++;
        }
    }
    
    cout << res;
    
    return 0;
}
