#include <iostream>
#include <algorithm>

using namespace std;

int T;

string s;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> s;
        
        cout << min(count(s.begin(), s.end(), 'a'), count(s.begin(), s.end(), 'b')) << '\n';
    }
    
    return 0;
}
