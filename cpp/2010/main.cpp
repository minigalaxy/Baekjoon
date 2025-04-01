#include <iostream>

using namespace std;

int N;

int p;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> p;
        
        res += p;
    }
    
    res -= N - 1;
    
    cout << res;
    
    return 0;
}
