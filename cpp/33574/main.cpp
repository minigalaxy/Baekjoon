#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Q;

vector<int> V;

int main()
{
    cin >> Q;
    
    for(int i = 0; i < Q; i++){
        int q, x, t;
        cin >> q;
        
        if(q == 1){
            cin >> x;
            
            if(x == 1) sort(V.begin(), V.end());
            else sort(V.begin(), V.end(), greater<>());
        } else {
            cin >> x >> t;
            
            V.insert(V.begin() + x, t);
        }
    }
    
    cout << V.size() << '\n';
    
    for(int r: V) cout << r << ' ';
    
    return 0;
}
