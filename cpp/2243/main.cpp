#include <iostream>

using namespace std;

int n;

int S[4000001] = { 0, };

int get(int l, int r, int i, int x){
    S[i]--;
    
    if(l == r) return l;
    
    int m = (l + r) / 2;
    
    if(x <= S[i * 2]) return get(l, m, i * 2, x);
    else return get(m + 1, r, i * 2 + 1, x - S[i * 2]);
}

void update(int l, int r, int i, int t, int c){
    if(t < l || r < t) return;
    
    S[i] += c;
    
    if(l == r) return;
    
    int m = (l + r) / 2;
    
    update(l , m, i * 2, t, c);
    update(m + 1, r, i * 2 + 1, t, c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int A, B, C;
        cin >> A;
        
        if(A == 1){
            cin >> B;
                
            cout << get(1, 1000000, 1, B) << '\n';
        } else {
            cin >> B >> C;
            
            update(1, 1000000, 1, B, C);
        }
    }
    
    return 0;
}
