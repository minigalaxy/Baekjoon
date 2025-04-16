#include <iostream>

using namespace std;

int t;

int c = 0;

string d ="NESW";

int main()
{
    for(int i = 0; i < 10; i++){
        cin >> t;
        
        if(t == 1) c++;
        else if(t == 2) c += 2;
        else c--;
    }
    cout << d[(c % 4 + 4) % 4];
    
    return 0;
}
