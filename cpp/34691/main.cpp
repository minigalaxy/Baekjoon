#include <iostream>

using namespace std;

string s;

int main()
{
    while(true){
        cin >> s;
        
        if(s == "animal") cout << "Panthera tigris";
        else if(s == "tree") cout << "Pinus densiflora";
        else if(s == "flower") cout << "Forsythia koreana";
        else break;
        
        cout << '\n';
    }
    
    return 0;
}
