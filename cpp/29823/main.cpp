#include <iostream>

using namespace std;

int N;

string d;

int p[2] = { 0, 0 };

int main()
{
    cin >> N >> d;
    
    for(char c: d){
        if(c == 'N') p[0]++;
        else if(c == 'E') p[1]++;
        else if(c == 'S') p[0]--;
        else p[1]--;
    }
    
    cout << abs(p[0]) + abs(p[1]);
    
    return 0;
}
