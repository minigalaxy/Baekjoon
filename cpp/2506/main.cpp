#include <iostream>

using namespace std;

int N;

bool c;

int st = 1;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> c;
        
        if(c) res += st++;
        else st = 1;
    }
    
    cout << res;
    
    return 0;
}
