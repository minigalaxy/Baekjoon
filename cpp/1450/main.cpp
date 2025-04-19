#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int N, C;

int W[30];

map<int, int> A, B;

vector<pair<int, int>> M;

int res = 0;

void A_ks(int i, int w){
    if(i == N / 2){
        A[w]--;
            
        return;
    }
    
    if(w + W[i] <= C) A_ks(i + 1, w + W[i]);
    A_ks(i + 1, w);
}

void B_ks(int i, int w){
    if(i == N){
        B[C - w]++;
            
        return;
    }
    
    if(w + W[i] <= C) B_ks(i + 1, w + W[i]);
    B_ks(i + 1, w);
}

int main()
{
    cin >> N >> C;
    
    for(int i = 0; i < N; i++) cin >> W[i];
    
    A_ks(0, 0);
    B_ks(N / 2, 0);
    
    for(pair<int, int> p: A) M.push_back(p);
    for(pair<int, int> p: B) M.push_back(p);
    
    sort(M.begin(), M.end());
    
    int tmp = 0;
    
    for(pair<int, int> p: M){
        if(p.second > 0) res -= p.second * tmp;
        else tmp += p.second;
    }
    
    cout << res;
    
    return 0;
}
