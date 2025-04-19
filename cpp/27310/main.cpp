#include <iostream>
#include <algorithm>

using namespace std;

string e;

int res = 0;

int main()
{
    cin >> e;
    
    cout << e.size() + count(e.begin(), e.end(), ':') + count(e.begin(), e.end(), '_') * 5;
    
    return 0;
}
