#include <iostream>

using namespace std;

int M, N;

bool sq[10001] = { false, };

int s = 0, mn = 10000;

int main()
{
    for(int i = 1; i <= 100; i++){
        sq[i * i] = true;
    }
    
    cin >> M >> N;
    
    for(int i = N; i >= M; i--){
        if(sq[i]){
            s += i;
            mn = i;
        }
    }
    
    if(s == 0) cout << -1;
    else cout << s << '\n' << mn;
    
    return 0;
}
