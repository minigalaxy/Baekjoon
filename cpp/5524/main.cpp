#include <iostream>
#include <string>

using namespace std;

int N;

string s;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> s;
        
        for(int j = 0; j < s.size(); j++){
            if(s[j] < 97) s[j] += 32;
        }
        
        cout << s << '\n';
    }
    
    return 0;
}
