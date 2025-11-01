#include <iostream>

using namespace std;

const int MAX = 15 * 28 * 19;

int E, S, M;

int c[MAX + 1] = { 0, };

int main()
{
    cin >> E >> S >> M;
    
    for(int i = E; i <= MAX; i += 15) c[i]++;
    for(int i = S; i <= MAX; i += 28) c[i]++;
    for(int i = M; i <= MAX; i += 19) c[i]++;
    
    for(int i = 1; i <= MAX; i++){
        if(c[i] == 3){
            cout << i;
            
            break;
        }
    }
    
    return 0;
}
