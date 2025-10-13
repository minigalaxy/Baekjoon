#include <iostream>
#include <vector>

using namespace std;

int N;

int cnt[100'001] = { 0, };

int q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N - 1; i++){
        int a, b;
        cin >> a >> b;
        
        cnt[a]++;
        cnt[b]++;
    }
    
    cin >> q;
    
    for(int i = 0; i < q; i++){
        int t, k;
        cin >> t >> k;
        
        if(t == 1) cout << ((cnt[k] > 1) ? "yes" : "no") << '\n';
        else cout << "yes\n";
    }
    
    return 0;
}
