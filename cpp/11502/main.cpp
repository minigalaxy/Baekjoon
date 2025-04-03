#include <iostream>
#include <vector>

using namespace std;

int T;

int K;

bool ip[1001];
vector<int> pn;

int main()
{
    fill(ip, ip + 1001, true);
    
    for(int i = 2; i <= 34; i++){
        if(ip[i]){
            for(int j = i * 2; j <= 1000; j += i) ip[j] = false;
        }
    }
    
    for(int i = 2; i <= 1000; i++){
        if(ip[i]) pn.push_back(i);
    }
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> K;
        
        bool f = false;
        
        for(int j = 0; j < pn.size() && !f && pn[j] < K; j++){
            for(int k = j; k < pn.size() && !f && pn[j] + pn[k] < K; k++){
                for(int l = k; l < pn.size() && !f && pn[j] + pn[k] + pn[l] <= K; l++){
                    if(pn[j] + pn[k] + pn[l] == K){
                        f = true;
                        cout << pn[j] << ' ' << pn[k] << ' ' << pn[l] << '\n';
                    }
                }
            }
        }
        
        if(!f) cout << "0\n";
    }
    
    return 0;
}
