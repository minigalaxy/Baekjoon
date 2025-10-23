#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K;

bool p[100'001] = { false, };

vector<int> prime;

bool b[100'001] = { false, };

int res = 0;

int main()
{
    for(int i = 2; i <= 100'000; i++){
        for(int j = 2; i * j <= 100'000; j++){
            p[i * j] = true;
        }
    }
    
    for(int i = 2; i <= 100'000; i++){
        if(!p[i]) prime.push_back(i);
    }
    
    cin >> N >> K;
    
    for(auto i = upper_bound(prime.begin(), prime.end(), K); i != prime.end(); i++){
        for(int j = 1; *i * j <= 100'000; j++){
            b[*i * j] = true;
        }
    }
    
    for(int i = 1; i <= N; i++){
        if(!b[i]) res++;
    }
    
    cout << res;
    
    return 0;
}
