#include <iostream>
#include <map>

using namespace std;

map<string, int> color;

string col[3];

long long res = 0;

int main()
{
    color.insert({ "black", 0 });
    color.insert({ "brown", 1 });
    color.insert({ "red", 2 });
    color.insert({ "orange", 3 });
    color.insert({ "yellow", 4 });
    color.insert({ "green", 5 });
    color.insert({ "blue", 6 });
    color.insert({ "violet", 7 });
    color.insert({ "grey", 8 });
    color.insert({ "white", 9 });
    
    cin >> col[0] >> col[1] >> col[2];
    
    res += color[col[0]] * 10 + color[col[1]];
    
    for(int i = 0; i < color[col[2]]; i++) res *= 10;
    
    cout << res;
    
    return 0;
}
