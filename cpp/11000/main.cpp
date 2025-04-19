#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N;

pair<int, int> ST[200000];

queue<pair<int, int>> schedule;
queue<pair<int, int>> tmp;

int res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> ST[i].first >> ST[i].second;
        
    sort(ST, ST + N);
    
    for(int i = 0; i < N; i++) schedule.push(ST[i]);
        
    while(!schedule.empty()){
        int c = 0;
    
        for(int i = schedule.size(); i > 0; i--){
            if(schedule.front().first >= c) c = schedule.front().second;
            else schedule.push(schedule.front());
            
            schedule.pop();
        }
        
        res++;
    }
    
    cout << res;
    
    return 0;
}
