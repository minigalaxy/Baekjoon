#include <iostream>

using namespace std;

int T;

string i, o;

int main()
{
    cin >> T;
    
    for(int j = 0; j < T; j++){
        cin >> i >> o;
        
        if(i == o) cout << "OK\n";
        else cout << "ERROR\n";
    }
    
    return 0;
}

