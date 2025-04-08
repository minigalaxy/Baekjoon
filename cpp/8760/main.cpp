#include <iostream>

using namespace std;

int Z;

int W, K;

int main()
{
    cin >> Z;
    
    for(int i = 0; i < Z; i++){
        cin >> W >> K;
        
        cout << W * (K / 2) + (W / 2) * (K % 2) << '\n';
    }
    
    return 0;
}
