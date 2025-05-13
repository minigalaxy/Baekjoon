#include <iostream>

using namespace std;

int N;

int M;

int parent[201];

int plan[1000];

int find_root(int c){
    return ((c == parent[c]) ? c : parent[c] = find_root(parent[c]));
}

void union_root(int a, int b){
    int ra = find_root(a);
    int rb = find_root(b);
    
    if(ra < rb) parent[rb] = ra;
    else parent[ra] = rb;
}

int main()
{
    cin >> N;
    
    cin >> M;
    
    for(int i = 1; i <= N; i++) parent[i] = i;
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            bool con;
            cin >> con;
            
            if(con) union_root(i, j);
        }
    }
    
    cin >> plan[0];
    
    for(int i = 1; i < M; i++){
        cin >> plan[i];
        
        if(find_root(plan[0]) != find_root(plan[i])){
            cout << "NO";
            
            return 0;
        }
    }
    
    cout << "YES";
        
    return 0;
}
