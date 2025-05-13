#include <iostream>
#include <map>

using namespace std;

int t;

int F;

map<string, int> cnt;
map<string, string> parent;

string find_root(string c){
    return ((c == parent[c]) ? c : parent[c] = find_root(parent[c]));
}

void union_root(string a, string b){
    string ra = find_root(a);
    string rb = find_root(b);
    
    if(ra == rb) return;
    
    if(ra < rb){
        parent[rb] = ra;
        cnt[ra] += cnt[rb];
    } else {
        parent[ra] = rb;
        cnt[rb] += cnt[ra];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> F;
        
        cnt.clear();
        parent.clear();
        
        for(int j = 0; j < F; j++){
            string a, b;
            cin >> a >> b;
            
            if(parent.find(a) == parent.end()){
                parent[a] = a;
                cnt[a] = 1;
            }
            if(parent.find(b) == parent.end()){
                parent[b] = b;
                cnt[b] = 1;
            }
            
            union_root(a, b);
            
            cout << cnt[find_root(a)] << '\n';
        }
    }
    
    return 0;
}
