#include <iostream>

using namespace std;

int N;

string S;

int main()
{
    cin >> N >> S;
    
    for(char& c: S){
        if(c == 'J') c = 'O';
        else if(c == 'O') c = 'I';
        else c = 'J';
    }
    
    cout << S;
    
    return 0;
}
