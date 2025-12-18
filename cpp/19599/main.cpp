#include <iostream>

using namespace std;

int N;

int B, T;

int res[3] = { 0, 0, 0 };

bool visited[500'000] = { false, };

void binary_search(int v, int l, int r){
    int m = (l + r) / 2;
    
    if(m == v);
    else {
        if(!visited[m]){
            visited[m] = true;
            B++;
        }
    
        if(v < m) binary_search(v, l, m - 1);
        else binary_search(v, m + 1, r);
        
        visited[m] = false;
    }
    
}

void ternary_search(int v, int l, int r){
    int lt = l + (r - l) / 3, rt = r - (r - l) / 3;
    
    if(lt == v);
    else if(rt == v) T++;
    else {
        if(!visited[lt]){
            visited[lt] = true;
            T++;
        }
        if(!visited[rt]){
            visited[rt] = true;
            T++;
        }
        
        if(v < lt) ternary_search(v, l, lt - 1);
        else if(v < rt) ternary_search(v, lt + 1, rt - 1);
        else ternary_search(v, rt + 1, r);
        
        visited[lt] = false;
        visited[rt] = false;
    }
    
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        B = T = 0;
            
        binary_search(i, 0, N - 1);
        ternary_search(i, 0, N - 1);
        
        if(B < T) res[0]++;
        else if(B == T) res[1]++;
        else res[2]++;
    }
    
    for(int i = 0; i < 3; i++) cout << res[i] << '\n';
    
    return 0;
}
