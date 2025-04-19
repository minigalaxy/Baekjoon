#include <iostream>

using namespace std;

int n;

string S;

int main()
{
    cin >> n >> S;
    
    for(char& c: S){
        if(c >= 'a') c -= 32;
        else c += 32;
    }
    
    cout << S;
    
    return 0;
}
