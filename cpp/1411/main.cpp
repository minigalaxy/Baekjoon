#include <iostream>

using namespace std;

int N;

string W[100];

int o;
char m[26];

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> W[i];
        
        o = 0;
        
        fill(m, m + 26, 0);
        
        for(char &c: W[i]){
            if(m[c - 'a'] == 0) m[c - 'a'] = (o++) + 'a';
            c = m[c - 'a'];
        }
    }
    
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(W[i] == W[j]) res++;
        }
    }
    
    cout << res;
    
    return 0;
}
