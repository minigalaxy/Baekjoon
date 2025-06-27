#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int w, n;

int P[5'000];

int A[2500], B[2500];

bool visited_a[800'001][5] = { false, }, visited_b[800'001][5] = { false, };

void dfs_A(int i, int cnt, int cur){
    for(int j = i + 1; j < n / 2; j++){
        if(cnt < 4 && !visited_a[cur + A[j]][cnt + 1] && cur + A[j] <= w){
            visited_a[cur + A[j]][cnt + 1] = true;
        
            dfs_A(j, cnt + 1, cur + A[j]);
        }
    }
}
void dfs_B(int i, int cnt, int cur){
    for(int j = i + 1; j < n - n / 2; j++){
        if(cnt < 4 && !visited_b[cur + B[j]][cnt + 1] && cur + B[j] <= w){
            visited_b[cur + B[j]][cnt + 1] = true;
        
            dfs_B(j, cnt + 1, cur + B[j]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> w >> n;
    
    for(int i = 0; i < n; i++) cin >> P[i];
    
    sort(P, P + n, greater<>());
    
    for(int i = 0; i < n / 2; i++) A[i] = P[i];
    for(int i = n / 2; i < n; i++) B[i - n / 2] = P[i];
    
    dfs_A(-1, 0, 0);
    dfs_B(-1, 0, 0);
    
    visited_a[0][0] = true;
    visited_b[0][0] = true;
    
    bool flag = false;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= w; j++){
            if(visited_a[j][i] && visited_b[w - j][4 - i]) flag = true;
        }
    }
    
    cout << ((flag) ? "YES" : "NO");
    
    return 0;
}
