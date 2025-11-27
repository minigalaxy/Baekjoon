#include <iostream>
#include <algorithm>

using namespace std;

double P;

int cnt[2];

int main()
{
    for(int i = 0; i < 100; i++){
        cnt[0] = cnt[1] = 0;
    
        for(int j = 0; j < 5'000; j++){
            cin >> P;
            
            if(0.25 <= P && P <= 0.75) cnt[0]++;
            else cnt[1]++;
        }
        
        if(double(cnt[0]) / cnt[1] < 1.1) cout << 'A' << '\n';
        else cout << 'B' << '\n';
    }
    return 0;
}
