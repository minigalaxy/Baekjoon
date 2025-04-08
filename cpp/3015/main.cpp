#include <iostream>
#include <stack>

using namespace std;

int N;

int H;

stack<pair<int, int>> s;

long long res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N;
    
    int stk;
    
    for(int i = 0; i < N; i++){
        cin >> H;
        
        stk = 1;
            
        while(!s.empty() && s.top().first < H){
            res += s.top().second;
            s.pop();
        }
        
        if(!s.empty()){
            if(s.top().first == H){
                res += s.top().second;
                stk = s.top().second + 1;
                
                if(s.size() > 1) res++;
                
                s.pop();
            } else res++;
        }
        
        s.push({ H, stk });
    }
    
    cout << res;
    
    return 0;
}
