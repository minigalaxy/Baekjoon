#include <iostream>
#include <string>

using namespace std;

string N;

int cnt[10] = { 0, };

int main()
{
    cin >> N;
    
    int t = 1;
    
    for(int i = N.size() - 1; i >= 0; i--){
        if(i > 0){
            for(int j = 0; j < 10; j++) cnt[j] += stoi(N.substr(0, i)) * t;
            cnt[0] -= t;
        }
        
        for(int j = 0; j < N[i] - '0'; j++) if(j > 0 || i != 0) cnt[j] += t;
        if(i < N.size() - 1) cnt[N[i] - '0'] += stoi(N.substr(i + 1, N.size()));
        cnt[N[i] - '0']++;
        
        t *= 10;
    }
    
    for(int i = 0; i < 10; i++) cout << cnt[i] << ' ';
    
    return 0;
}
