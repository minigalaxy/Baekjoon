#include <iostream>

using namespace std;

int N;

string s;

int c = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> s;
        
        bool p = true;
        
        for(int j = 0; j < s.size(); j++){
            if(s[j] != s[s.size() - j - 1]) p = false;
        }
        
        if(p) c++;
    }
    
    cout << c * (c - 1);
    
    return 0;
}
