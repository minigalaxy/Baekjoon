#include <iostream>
#include <stack>

using namespace std;

int N;

int W;

int ac[1002][2];

int m[1002][1002];

bool trace[1002][1002];

int dist(int a, int b){
    return abs(ac[a][0] - ac[b][0]) + abs(ac[a][1] - ac[b][1]);
}

int dp(int p1, int p2){
    int nt = max(p1, p2) + 1;
    
    if(nt == W + 2) return 0;
    
    if(m[p1][p2] != -1) return m[p1][p2];
    
    int ret1 = dp(nt, p2) + dist(p1, nt), ret2 = dp(p1, nt) + dist(p2, nt);

    if(ret1 < ret2){
        trace[p1][p2] = true;
        m[p1][p2] = ret1;
    } else {
        trace[p1][p2] = false;
        m[p1][p2] = ret2;
    }
    
    return m[p1][p2];
}

int main()
{
    fill(m[0], m[1002], -1);
    
    cin >> N;
    
    cin >> W;
    
    ac[0][0] = ac[0][1] = 1;
    ac[1][0] = ac[1][1] = N;
    
    for(int i = 2; i < W + 2; i++) cin >> ac[i][0] >> ac[i][1];
    
    cout << dp(0, 1) << '\n';
    
    int p1 = 0, p2 = 1;
    
    for(int i = 2; i < W + 2; i++){
        if(trace[p1][p2]){
            cout << "1\n";
            p1 = i;
        } else {
            cout << "2\n";
            p2 = i;
        }
    }
    
    return 0;
}
