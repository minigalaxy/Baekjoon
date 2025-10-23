#include <iostream>

using namespace std;

int N, L;

int main()
{
    cin >> N >> L;
    
    int i = 0;
    
    while(N){
        i++;
            
        string s = to_string(i);
            
        if(s.find('0' + L) == string::npos) N--;
    }
    
    cout << i;
    
    return 0;
}
