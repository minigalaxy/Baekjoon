#include <iostream>

using namespace std;

int lv;

string j;

int main()
{
    cin >> lv >> j;
    
    if(j == "miss") cout << 0;
    else if(j == "bad") cout << lv * 200;
    else if(j == "cool") cout << lv * 400;
    else if(j == "great") cout << lv * 600;
    else cout << lv * 1000;
    
    return 0;
}
