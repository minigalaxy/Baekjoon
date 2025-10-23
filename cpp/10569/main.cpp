#include <iostream>

using namespace std;

int T;

int V, E;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> V >> E;
        
        cout << E - V + 2 << '\n';
    }
    
    return 0;
}
