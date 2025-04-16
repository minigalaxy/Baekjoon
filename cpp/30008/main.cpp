#include <iostream>

using namespace std;

int N, K;

double G;

int main()
{
    cin >> N >> K;
    
    for(int i = 0; i < K; i++){
        cin >> G;
        
        int p = G / N * 100;
        
        if(p <= 4) cout << 1;
        else if(p <= 11) cout << 2;
        else if(p <= 23) cout << 3;
        else if(p <= 40) cout << 4;
        else if(p <= 60) cout << 5;
        else if(p <= 77) cout << 6;
        else if(p <= 89) cout << 7;
        else if(p <= 96) cout << 8;
        else cout << 9;
        
        cout << ' ';
    }
    
    return 0;
}
