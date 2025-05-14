#include <iostream>
#include <vector>

using namespace std;

int N;

vector<int> edge[50];

int visited[50] = { 0, };

int group_num = 0;

int con = 0;

void init(int cur, int p){
    visited[cur] = 1;
    
    for(int n: edge[cur]){
        if(visited[n] > 0){
            if(n != p && visited[n] == 1){
                con++;
                
                visited[cur] = 2;
            }
        } else init(n, cur);
    }
}

int main()
{
    cin >> N;
    cin.ignore();
    
    bool flag = false;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int t = getchar();
            
            if(t == 'Y') edge[i].push_back(j);
        }
        
        if(edge[i].empty()) flag = true;
        
        getchar();
    }
    
    if(N == 1){
        cout << 0;
        
        return 0;
    }
    if(flag){
        cout << -1;
        
        return 0;
    }
    
    for(int i = 0; i < N; i++){
        if(!visited[i]){
            init(i, -1);
            group_num++;
        }
    }
    
    if(con >= group_num - 1) cout << group_num - 1;
    else cout << -1;
    
    return 0;
}
