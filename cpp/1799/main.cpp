#include <iostream>
#include <vector>

using namespace std;

int N;

vector<int> b[19], w[19];

bool v[19] = { false, };

int res[2] = { 0, 0 };

void bdfs(int i, int c){
    if(i == N){
        res[0] = max(res[0], c);
        
        return;
    }
    
    for(int d: b[i]){
        if(!v[d]){
            v[d] = true;
            bdfs(i + 1, c + 1);
            v[d] = false;
        }
    }
    
    bdfs(i + 1, c);
}
void wdfs(int i, int c){
    if(i == N - 1){
        res[1] = max(res[1], c);
        
        return;
    }
    
    for(int d: w[i]){
        if(!v[d]){
            v[d] = true;
            wdfs(i + 1, c + 1);
            v[d] = false;
        }
    }
    
    wdfs(i + 1, c);
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            bool t;
            cin >> t;
            
            if(t){
                if((i + j) % 2 == 0) b[(i + j) / 2].push_back((j - i + 9) / 2);
                else w[(i + j) / 2].push_back((j - i + 9) / 2);
            }
        }
    }
    
    bdfs(0, 0);
    wdfs(0, 0);
    
    cout << res[0] + res[1];
    
    return 0;
}
