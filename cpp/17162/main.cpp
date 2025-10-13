#include <iostream>
#include <stack>
#include <deque>

using namespace std;

int Q, mod;

stack<int> arr;

deque<int> R[100];

int s = 0;

int get_left(){
    int l = s;
    
    for(int i = 0; i < mod; i++){
        if(R[i].empty()) return -1;
        
        l = min(l, R[i].back());
    }
    
    return l;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> Q >> mod;
    
    for(int i = 0; i < Q; i++){
        int q, num;
        cin >> q;
        
        if(q == 1){
            cin >> num;
            
            num %= mod;
            
            arr.push(num);
            R[num].push_back(++s);
        } else if(q == 2){
            if(s > 0){
                R[arr.top()].pop_back();
                arr.pop();
                
                s--;
            }
        } else {
            int l = get_left();
            
            if(l == -1) cout << "-1\n";
            else cout << s - l + 1 << '\n';
        }
    }
    
    return 0;
}
