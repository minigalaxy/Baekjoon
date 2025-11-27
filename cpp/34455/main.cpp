#include <iostream>

using namespace std;

int D;

int E;

char s;

int Q;

int main()
{
    cin >> D;
    
    cin >> E;
    
    for(int i = 0; i < E; i++){
        cin >> s >> Q;
        
        if(s == '+') D += Q;
        else D -= Q;
    }
    
    cout << D;
    
    return 0;
}
