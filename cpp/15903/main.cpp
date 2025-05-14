#include <iostream>
#include <queue>

using namespace std;

int n, m;

int a;

priority_queue<long long, vector<long long>, greater<long long>> Q;

long long res = 0;

int main()
{
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        cin >> a;
        
        Q.push(a);
    }
    
    for(int i = 0; i < m; i++){
        long long x = Q.top();
        Q.pop();
        long long y = Q.top();
        Q.pop();
        
        Q.push(x + y);
        Q.push(x + y);
    }
    
    while(!Q.empty()){
        res += Q.top();
        Q.pop();
    }
    
    cout << res;
    
    return 0;
}
