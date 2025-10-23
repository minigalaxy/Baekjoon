#include <iostream>

using namespace std;

int N;

int T[50];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> T[i];
    
    int l = 0, r = 0;
    
    for(int i = 0, c = 0; i < N; i++){
        if(T[i] > c){
            l++;
            c = T[i];
        }
    }
    for(int i = N - 1, c = 0; i > -1; i--){
        if(T[i] > c){
            r++;
            c = T[i];
        }
    }
    
    cout << l << '\n' << r;
    
    return 0;
}
