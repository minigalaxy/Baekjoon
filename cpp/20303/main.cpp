#include <iostream>
#include <vector>

using namespace std;

int N, M, K;

int c[30000];

vector<int> fr;

int main()
{
    cin >> N >> M >> K;
    
    for(int i = 0; i < N; i++) cin >> c[i];
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        
        fr[a].push_back(b);
        fr[b].push_back(a);
    }
    
    return 0;
}
