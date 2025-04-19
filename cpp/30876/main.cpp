#include <iostream>

using namespace std;

int N;

int x, y;

int res[2] = { 0, 1001 };

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        
        if(y < res[1]){
            res[0] = x;
            res[1] = y;
        }
    }
    
    cout << res[0] << ' ' << res[1];
    
    return 0;
}
