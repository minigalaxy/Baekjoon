#include <iostream>

using namespace std;

int N, K;

int p1 = 0, p2 = 0, p3 = 0, p4 = 0, mn = 0, mx = 0;

int main()
{
    cin >> N >> K;
    
    for(int i = 0; i < N; i++){
        int in, out;
        cin >> out >> in;
        
        p2 -= out;
        if(p2 < 0){
            p1 += p2;
            mn -= p2;
            p2 = 0;
        }
        
        p3 -= out;
        mx += out;
        if(p3 < 0){
            p4 += p3;
            mx += p3;
            p3 = 0;
        }
        
        p1 += in;
        p3 += in;
        
        if(i != N - 1 && i % K == 0){
            p2 += p1;
            p1 = 0;
            p4 += p3;
            p3 = 0;
        }
    }
    
    cout << mn << ' ' << mx;
    
    return 0;
}
