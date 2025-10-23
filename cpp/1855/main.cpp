#include <iostream>

using namespace std;

int K;

string s;

string res[20];

int main()
{
    cin >> K >> s;
    
    for(int i = 0; i < s.size(); i += 2 * K){
        for(int j = 0; j < K; j++) res[j].push_back(s[i + j]);
        if(s.size() > i + K) for(int j = 0; j < K; j++) res[j].push_back(s[i + 2 * K - j - 1]);
    }
    
    for(int i = 0; i < K; i++) cout << res[i];
    
    return 0;
}
