#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;

vector<pair<int, int>> bridge[100001];

int dpt, dst;

int W[100001] = { 0, };

const int MAX = 1'000'000'000;

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        int A, B, C;
        cin >> A >> B >> C;
    
         bridge[A].push_back({ B, C });
         bridge[B].push_back({ A, C });
    }
    
    cin >> dpt >> dst;
    
    priority_queue<pair<int, int>> visit;
    
    visit.push({ MAX, dpt });
    W[dpt] = MAX;
    
    while(!visit.empty()){
        pair<int, int> v = visit.top();
        visit.pop();
        
        if(v.second == dst){
            cout << v.first;
            
            return 0;
        }
        
        for(pair<int, int> p: bridge[v.second]){
            if(min(W[v.second], p.second) > W[p.first]){
                W[p.first] = min(W[v.second], p.second);
                visit.push({ W[p.first], p.first });
            }
        }
    }
    
    return 0;
}
