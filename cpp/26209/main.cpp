#include <iostream>

using namespace std;

int N;

bool res = true;

int main()
{
    for(int i = 0; i < 8; i++){
        cin >> N;
        
        if(N >= 2) res = false;
    }
    
    cout << ((res) ? 'S' : 'F');
    
    return 0;
}
