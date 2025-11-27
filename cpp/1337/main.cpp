#include <iostream>
#include <set>

using namespace std;

int N;

set<int> S;

int res = 4;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int t;
        cin >> t;
        
        S.insert(t);
    }
    
    for(int n: S){
        int t = 4;
            
        for(int i = n + 1; i < n + 5; i++){
            if(S.find(i) != S.end()) t--;
        }
        
        res = min(res, t);
    }
    
    cout << res;
    
    return 0;
}
