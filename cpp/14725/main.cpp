#include <iostream>
#include <map>
#include <set>

using namespace std;

int N;

int K;

string f;

map<string, set<string>> child;

void dfs(string c, string k, int d){
    for(int i = 0; i < d * 2; i++) cout << '-';
    
    cout << c << '\n';
    
    for(string n: child[k]){
        dfs(n, k + ">" + n, d + 1);
    }
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> K;
        
        string p = "root";
                
        for(int j = 0; j < K; j++){
            cin >> f;
            
            child[p].insert(f);
            
            p += ">" + f;
        }
    }
    
    for(string s: child["root"]) dfs(s, "root>" + s, 0);
    
    return 0;
}
