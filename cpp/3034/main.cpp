#include <iostream>

using namespace std;

int N, W, H;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> W >> H;
    
    for(int i = 0; i < N; i++){
        int l;
        cin >> l;
        
        cout << ((l * l <= W * W + H * H) ? "DA\n" : "NE\n");
    }
    
    return 0;
}
