#include <iostream>
#include <algorithm>

using namespace std;

int N;

int req[10'000];

int M;

int main()
{
    cin >> N;
    
    int s = 0;
    
    for(int i = 0; i < N; i++){
        cin >> req[i];
        
        s += req[i];
    }
    
    cin >> M;
    
    sort(req, req + N);
    
    if(s <= M) cout << *max_element(req, req + N);
    else {
        int tmp = 0;
    
        for(int i = 0; i < N; i++){
            if((M - tmp) / (N - i) < req[i]){
                cout << (M - tmp) / (N - i);
            
                return 0;
            }
            
            tmp += req[i];
        }
    }
    
    return 0;
}
