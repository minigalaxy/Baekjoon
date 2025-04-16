#include <iostream>

using namespace std;

int T;

int N;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        cout << (((N + 1) % (N % 100) == 0) ? "Good\n" : "Bye\n");
    }
    
    return 0;
}
