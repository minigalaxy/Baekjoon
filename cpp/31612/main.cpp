#include <iostream>

using namespace std;

int N;

string S;

int res = 0;

int main()
{
    cin >> N >> S;
    
    for(char c: S){
        if(c == 'j') res += 2;
        else if(c == 'o') res++;
        else res += 2;
    }
    
    cout << res;
    
    return 0;
}
