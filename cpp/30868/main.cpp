#include <iostream>

using namespace std;

int T;

int n;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> n;
        
        for(int j = 0; j < n / 5; j++){
            cout << "++++ ";
        }
        
        for(int j = 0; j < n % 5; j++){
            cout << "|";
        }
        
        cout << '\n';
    }
    
    return 0;
}
