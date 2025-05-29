#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int N, D;

long long K[100'000];

deque<pair<int, long long>> Q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> D;
    
    for(int i = 0; i < N; i++) cin >> K[i];
    
    for(int i = 0; i < N; i++){
        while(!Q.empty()){
            if(Q.front().first < i - D) Q.pop_front();
            else {
                K[i] = max(K[i], K[i] + Q.front().second);
                
                break;
            }
        }
        while(!Q.empty() && Q.back().second < K[i]) Q.pop_back();
        
        Q.push_back({ i, K[i] });
    }
    
    cout << *max_element(K, K + N);
    
    return 0;
}
