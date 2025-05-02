#include <iostream>
#include <string>
#include <vector>

using namespace std;

string T, P;

int n, m;

int k[1000001] = { 0, };

vector<int> res;

int main()
{
    getline(cin, T);
    getline(cin, P);
    
    n = T.size();
    m = P.size();
    
    int i = -1, j = 0;
    
    k[j] = i;
    
    while(j < m){
        if(i == -1 || P[i] == P[j]) k[++j] = ++i;
        else i = k[i];
    }
    
    for(int i = 0, j = 0; i < n; i++){
        //cout << i << ' ';
        
        while(i + j < n && j < m && T[i + j] == P[j]) j++;
        
        if(j == m) res.push_back(i);
    
        //cout << j << '\n';
        
        if(j > 0){
            i += j - k[j] - 1;
            j = k[j];
        }
    }
    
    cout << res.size() << '\n';
    
    for(int i: res) cout << i + 1 << ' ';
    
    return 0;
}
