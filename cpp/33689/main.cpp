#include <iostream>

using namespace std;

int N;

string t;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> t;
        
        if(t[0] == 'C') res++;
    }
    
    cout << res;
    
    return 0;
}
