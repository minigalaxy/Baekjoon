#include <iostream>

using namespace std;

string t;

int N;

string s;

int res = 0;

int main()
{
    cin >> t;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> s;
        
        if(t.substr(0, 5) == s.substr(0, 5)) res++;
    }
    
    cout << res;
    
    return 0;
}
