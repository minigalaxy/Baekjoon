#include <iostream>
#include <algorithm>

using namespace std;

int t;

int w[5];

int main()
{
    cin >> t;
    
    for(int i = 1; i <= t; i++){
        for(int j = 0; j < 5; j++) cin >> w[j];
        
        cout << "Case #" << i << ": " << *max_element(w, w + 5) << '\n';
    }
    
    return 0;
}
