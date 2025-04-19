#include <iostream>

using namespace std;

int v[5];

int res = 0;

int main()
{
    cin >> v[0];
    
    for(int i = 1; i < 5; i++){
        cin >> v[i];
            
        if(v[0] - v[i] <= 1000) res++;
    }
    
    cout << res;
    
    return 0;
}
