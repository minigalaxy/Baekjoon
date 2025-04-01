#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        cout << i << ' ';
        
        if(i % 6 == 0) cout << "Go! ";
    }
    
    if(N % 6 != 0) cout << "Go!";
    
    return 0;
}
