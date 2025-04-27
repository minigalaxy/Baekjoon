#include <iostream>
#include <algorithm>

using namespace std;

int s[5] = { 0, };

int t;

int main()
{
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cin >> t;
            
            s[i] += t;
        }
    }
    
    cout << max_element(s, s + 5) - s + 1 << ' ' << *max_element(s, s + 5);
    
    return 0;
}
