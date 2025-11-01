#include <iostream>

using namespace std;

int T;

int N;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        cout << (1 + N) * (1 + N) / 4 << '\n';
    }
    
    return 0;
}
