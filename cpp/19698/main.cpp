#include <iostream>

using namespace std;

int N, W, H, L;

int main()
{
    cin >> N >> W >> H >> L;
    
    cout << min(N, (W / L) * (H / L));
    
    return 0;
}
