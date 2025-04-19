#include <iostream>

using namespace std;

int N;

int M;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> M;
        
        if(M == 300) cout << 1;
        else if(M >= 275) cout << 2;
        else if(M >= 250) cout << 3;
        else cout << 4;
        
        cout << ' ';
    }
    
    return 0;
}
