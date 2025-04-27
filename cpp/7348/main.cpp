#include <iostream>
#include <algorithm>

using namespace std;

int T;

int N;

int s, t;

int c[200];

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        fill(c, c + 200, 0);
            
        cin >> N;
        
        for(int j = 0; j < N; j++){
            cin >> s >> t;
            
            s--;
            t--;
            
            if(s > t) swap(s, t);
            
            for(int k = s / 2; k <= t / 2; k++) c[k]++;
        }
        
        cout << *max_element(c, c + 200) * 10 << '\n';
    }
    
    return 0;
}
