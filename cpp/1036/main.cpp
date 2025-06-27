#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

string S[50];

int K;

vector<pair<string, int>> sum;

string res;

string rep(string a, int n){
    for(int i = 0; i < a.size(); i++){
        if(((a[i] >= 'A') ? a[i] - 'A' + 10 : a[i] - '0') == n) a[i] = 'Z';
    }
    
    return a;
}

string add(string a, string b){
    string ret;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    while(a.size() < b.size()) a.push_back('0');
    while(a.size() > b.size()) b.push_back('0');
    
    int carry = 0;
    
    for(int i = 0; i < a.size(); i++){
        int cur = ((a[i] >= 'A') ? a[i] - 'A' + 10 : a[i] - '0') + ((b[i] >= 'A') ? b[i] - 'A' + 10 : b[i] - '0') + carry;
        
        if(cur >= 36){
            carry = 1;
            cur -= 36;
        } else carry = 0;
        
        ret.push_back(((cur >= 10) ? cur - 10 + 'A' : cur + '0'));
    }
    
    if(carry > 0) ret.push_back('1');
    
    reverse(ret.begin(), ret.end());
    
    return ret;
}

bool compare(pair<string, int> a, pair<string, int> b){
    if(a.first.size() == b.first.size()){
        for(int i = 0; i < a.first.size(); i++){
            if(a.first[i] != b.first[i]) return (a.first[i] > b.first[i]);
        }
        
        return (a.second < b.second);
    } else return (a.first.size() > b.first.size());
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> S[i];
    
    cin >> K;
    
    for(int i = 0; i < 36; i++){
        string t = rep(S[0], i);
            
        for(int j = 1; j < N; j++){
            t = add(t, rep(S[j], i));
        }
        
        sum.push_back({ t, i });
    }
    
    sort(sum.begin(), sum.end(), compare);
    
    for(int i = 0; i < K; i++){
        for(int j = 0; j < N; j++){
            S[j] = rep(S[j], sum[i].second);
        }
    }
    
    res = S[0];
    
    for(int i = 1; i < N; i++) res = add(res, S[i]);
    
    cout << res;
    
    return 0;
}
