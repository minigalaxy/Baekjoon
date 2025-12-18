#include <iostream>
#include <algorithm>

using namespace std;

int N;

pair<pair<int, string>, int> S[3];

int main()
{
    for(int i = 0; i < 3; i++) S[i].second = i + 1;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int F[3];
        cin >> F[0] >> F[1] >> F[2];
        
        for(int j = 0; j < 3; j++) S[j].first.first += F[j];
        for(int j = 0; j < 3; j++) S[j].first.second += F[j];
    }
    
    for(int i = 0; i < 3; i++) sort(S[i].first.second.begin(), S[i].first.second.end(), greater<>());
    
    sort(S, S + 3, greater<>());

    if(S[0].first.second == S[1].first.second) cout << "0 " << S[0].first.first;
    else cout << S[0].second << ' ' << S[0].first.first;
    
    return 0;
}
