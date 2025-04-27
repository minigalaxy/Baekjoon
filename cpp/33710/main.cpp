#include <iostream>
#include <vector>

using namespace std;

int N, K;

string S;

vector<int> edge[100];

vector<int> cp[26];

int res;

int main()
{
    cin >> N >> K;
    
    cin >> S;
    
    for(int i = 0; i < N; i++) if(S[i] != 'X') cp[S[i] - 'A'].push_back(i);
    
    for(int i = 0; i < N; i++){
        for(int p: cp[S[i] - 'A']) if(p > i) edge[i].push_back(p);
    }
    
    res = N;
    
    for(int i = 0; i < N; i++){
        for(int p: edge[i]){
            res = min(res, N - (p - i + 1));
                
            for(int j = p + 1; j < N; j++){
                for(int p2: edge[j]){
                    res = min(res, N - (p - i + 1 + p2 - j + 1));
                }
            }
        }
    }
    
    cout << res;
    
    return 0;
}
