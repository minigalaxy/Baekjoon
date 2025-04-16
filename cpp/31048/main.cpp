#include <iostream>

using namespace std;

int T;

int N;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        int tmp = 1;
        
        for(int j = 2; j <= N; j++) tmp *= j;
        
        cout << tmp % 10 << '\n';
    }
    
    return 0;
}
