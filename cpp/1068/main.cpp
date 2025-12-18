#include <iostream>
#include <vector>

using namespace std;

int N;

int p[50];

vector<int> ch[50];

int d;

int r;

int solve(int c){
    int ret = 0;
    
    for(int n: ch[c]){
        if(n != d) ret += solve(n);
    }
    
    return max(1, ret);
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> p[i];
            
        if(p[i] == -1) r = i;
        else ch[p[i]].push_back(i);
    }
    
    cin >> d;
    
    if(d == r) cout << 0;
    else cout << solve(r);
    
    return 0;
}
