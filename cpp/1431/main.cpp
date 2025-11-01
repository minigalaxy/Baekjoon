#include <iostream>
#include <algorithm>

using namespace std;

int N;

string S;

pair<int, pair<int, string>> P[50];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> S;
        
        int sum = 0;
        
        for(char c: S) if(c <= '9') sum += c - '0';
        
        P[i].first = S.size();
        P[i].second.first = sum;
        P[i].second.second = S;
    }
    
    sort(P, P + N);
    
    for(int i = 0; i < N; i++) cout << P[i].second.second << '\n';
    
    return 0;
}
