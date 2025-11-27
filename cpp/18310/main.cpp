#include <iostream>

using namespace std;

int N;

int H[100'001] = { 0, };

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int t;
        cin >> t;
        
        H[t]++;
    }
    
    int l = 0, r = N, i = 0;
    
    while(r > l){
        i++;
        
        l += H[i];
        r -= H[i];
    }
    
    cout << i;
    
    return 0;
}
