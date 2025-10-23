#include <iostream>

using namespace std;

int M, N;

bool b = true;

int res = -1;

int main()
{
    cin >> M >> N;
    
    while(M && N){
        if(b) M--;
        else N--;
        
        b = !b;
        
        res++;
    }
    
    cout << res;
    
    return 0;
}
