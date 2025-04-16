#include <iostream>

using namespace std;

int N;

char c;

int d;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> c >> c >> d;
        
        if(d <= 90) res++;
    }
    
    cout << res;
    
    return 0;
}
