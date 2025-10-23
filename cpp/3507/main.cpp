#include <iostream>

using namespace std;

int n;

int res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < 100; i++) for(int j = 0; j < 100; j++) if(i + j == n) res++;
    
    cout << res;
    
    return 0;
}
