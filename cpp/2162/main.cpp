#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N;

int x1, y1, x2, y2;

struct line {
    int x1, y1, x2, y2;
};

vector<line> L;

vector<int> edge[3000];

queue<int> visit;
bool visited[3000] = { false, };

int res[2] = { 0, 0 };

int ccw(int x1, int y1, int x2, int y2, int x3, int y3){
    return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

bool is_group(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4){
    int x[4] = { x1, x2, x3, x4 };
    int y[4] = { y1, y2, y3, y4 };
    
    if(ccw(x[0], y[0], x[2], y[2], x[1], y[1]) == 0 && ccw(x[0], y[0], x[3], y[3], x[1], y[1]) == 0){
        if(x[0] == x[1]) return ((max(y[2], y[3]) >= min(y[0], y[1])) && (min(y[2], y[3]) <= max(y[0], y[1])));
        else return ((max(x[2], x[3]) >= min(x[0], x[1])) && (min(x[2], x[3]) <= max(x[0], x[1])));
    } else if(ccw(x[0], y[0], x[2], y[2], x[1], y[1]) == 0){
        return (((x[2] >= min(x[0], x[1])) && (x[2] <= max(x[0], x[1]))) && ((y[2] >= min(y[0], y[1])) && (y[2] <= max(y[0], y[1]))));
    } else if(ccw(x[0], y[0], x[3], y[3], x[1], y[1]) == 0){
        return (((x[3] >= min(x[0], x[1])) && (x[3] <= max(x[0], x[1]))) && ((y[3] >= min(y[0], y[1])) && (y[3] <= max(y[0], y[1]))));
    } else if(ccw(x[2], y[2], x[0], y[0], x[3], y[3]) == 0){
        return (((x[0] >= min(x[2], x[3])) && (x[0] <= max(x[2], x[3]))) && ((y[0] >= min(y[2], y[3])) && (y[0] <= max(y[2], y[3]))));
    } else if(ccw(x[2], y[2], x[1], y[1], x[3], y[3]) == 0){
        return (((x[1] >= min(x[2], x[3])) && (x[1] <= max(x[2], x[3]))) && ((y[1] >= min(y[2], y[3])) && (y[1] <= max(y[2], y[3]))));
    } else return (((ccw(x[0], y[0], x[2], y[2], x[1], y[1]) > 0) ^ (ccw(x[0], y[0], x[3], y[3], x[1], y[1]) > 0)) && (((ccw(x[2], y[2], x[1], y[1], x[3], y[3]) > 0) ^ (ccw(x[2], y[2], x[0], y[0], x[3], y[3]) > 0))));
}

int bfs(int s){
    int cnt = 0;
    
    visit.push(s);
    visited[s] = true;
    
    while(!visit.empty()){
        int v = visit.front();
        visit.pop();
        
        cnt++;
        
        for(int n: edge[v]){
            if(!visited[n]){
                visit.push(n);
                visited[n] = true;
            }
        }
    }
    
    return cnt;
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        
        for(int j = 0; j < i; j++){
            if(is_group(x1, y1, x2, y2, L[j].x1, L[j].y1, L[j].x2, L[j].y2)){
                edge[i].push_back(j);
                edge[j].push_back(i);
            }
        }
        
        L.push_back({ x1, y1, x2, y2 });
    }
    
    for(int i = 0; i < N; i++){
        if(!visited[i]){
            res[0]++;
            res[1] = max(res[1], bfs(i));
        }
    }
    
    cout << res[0] << '\n' << res[1];
    
    return 0;
}
