#include <iostream>
#include <vector>

using namespace std;

bool m[1000001] = { false, };

vector<int> p;

vector<long long> pf;

long long n;

long long res = 0;

int main()
{
    for(int i = 2; i <= 1000; i++){
        if(!m[i]){
            for(int j = i * 2; j <= 1000000; j += i) m[j] = true;
        }
    }
    
    for(int i = 2; i <= 1000000; i++){
        if(!m[i]) p.push_back(i);
    }
    
    cin >> n;
    
    long long N = n;
    
    for(int d: p){
        if(N % d == 0){
            pf.push_back(d);
        
            while(N % d == 0) N /= d;
        }
    }
    
    if(N > 1) pf.push_back(N);
    
    for(int i = 0; i < (1 << pf.size()); i++){
        long long m = 1;
        int c = 0;
        
        for(int j = 0; j < pf.size(); j++){
            if(i & (1 << j)){
                m *= pf[j];
                c++;
            }
        }
            
        if(c > 0){
            if(c % 2 == 1) res += n / m;
            else res -= n / m;
        }
    }
    
    cout << n - res;
    
    return 0;
}
