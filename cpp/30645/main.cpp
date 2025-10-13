#include <iostream>
#include <algorithm>

using namespace std;

int R, C;

int N;

int h[1'000'000];

int table[1000][2] = { 0, };

int res = 0;

int main()
{
    cin >> R >> C;
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> h[i];
    
    sort(h, h + N);
    
    for(int i = 0; i < N; i++){
        int c = 0;
        
        while(c < C){
            if(table[c][0] < h[i] && table[c][1] < C){
                table[c][0] = h[i];
                table[c][1]++;
                
                break;
            }
            
            c++;
        }
    }
    
    for(int i = 0; i < C; i++) res += table[i][1];
    
    cout << res;
    
    return 0;
}
