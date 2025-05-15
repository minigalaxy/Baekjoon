#include <iostream>
#include <queue>

using namespace std;

int n, w, L;

int a;

queue<int> Q;
queue<pair<int, int>> Q2;

int res = 0;

int main()
{
    cin >> n >> w >> L;
    
    for(int i = 0, sum = 0; i < n; i++){
        cin >> a;
        
        Q.push(a);
    }
    
    int sum = 0, cnt = 0;
    
    for(; !Q.empty() || !Q2.empty(); res++){
        if(!Q2.empty() && res == Q2.front().second){
            sum -= Q2.front().first;
            Q2.pop();
        }
            
        if(!Q.empty() && sum + Q.front() <= L){
            sum += Q.front();
            Q2.push({ Q.front(), res + w });
            Q.pop();
        }
    }
    
    cout << res;
    
    return 0;
}
