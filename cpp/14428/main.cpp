#include <iostream>

using namespace std;

int N, M;

int A[100000];

pair<int, int> mn[400000];

int a, b, c;

pair<int, int> init(int l, int r, int i){
    if(l == r) return mn[i] = make_pair(A[l], l);
    
    int m = (l + r) / 2;
    
    return mn[i] = min(init(l, m, i * 2), init(m + 1, r, i * 2 + 1));
}

pair<int, int> update(int l, int r, int i, int a, int b){
    if(a < l || a > r) return mn[i];
    if(l == r){
        mn[i].first = b;
        
        return mn[i];
    }

    int m = (l + r) / 2;

    return mn[i] = min(update(m + 1, r, i * 2 + 1, a, b), update(l, m, i * 2, a, b));
}

pair<int, int> inquiry(int l, int r, int i, int a, int b){
    if(l > b || r < a) return { 1000000001, 0 };

    if(a <= l && r <= b) return mn[i];
    
    int m = (l + r) / 2;
    
    return min(inquiry(l, m, i * 2, a, b), inquiry(m + 1, r, i * 2 + 1, a, b));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    init(0, N - 1, 1);
    
    cin >> M;
    
    for(int i = 0; i < M; i++){
        cin >> a >> b >> c;
        
        if(a == 1) update(0, N - 1, 1, b - 1, c);
        else cout << inquiry(0, N - 1, 1, b - 1, c - 1).second + 1 << '\n';
    }
    
    return 0;
}
