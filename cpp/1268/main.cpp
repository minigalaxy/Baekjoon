#include <iostream>
#include <set>

using namespace std;

int N;

int C[1000][5];

set<int> F[1000];

int res[2] = { 0, 0 };

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 5; j++){
            cin >> C[i][j];
        }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < N - 1; j++){
            for(int k = j + 1; k < N; k++){
                if(C[j][i] == C[k][i]){
                    F[j].insert(k);
                    F[k].insert(j);
                }
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        if(F[i].size() > res[0]){
            res[0] = F[i].size();
            res[1] = i;
        }
    }
    
    cout << res[1] + 1;
    
    return 0;
}
