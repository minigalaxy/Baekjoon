#include <iostream>

using namespace std;

int N;

string s;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> s;
        
        if(s.find('S') != string::npos) cout << s;
    }
    
    return 0;
}
