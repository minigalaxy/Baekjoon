#include <iostream>

using namespace std;

string j;

int N;

string f;

int res = 0;

int main()
{
    cin >> j;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> f;
        
        if(j == f) res++;
    }
    
    cout << res;
    
    return 0;
}
