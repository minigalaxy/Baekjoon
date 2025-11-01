#include <iostream>

using namespace std;

int n;

bool b[201] = { false, }, visited[201] = { false, };

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
    
        b[t] = true;
    }
    
    bool turn = true;
    int i = 0, j = 0, cur = 0;
    
    while(i < n && j < n){
        bool flag = false;
            
        for(int k = cur + 1; k <= n * 2; k++){
            if(turn == b[k] && !visited[k]){
                cur = k;
                visited[k] = true;
                
                if(turn) i++;
                else j++;
    
                flag = true;
                
                break;
            }
        }
        
        if(!flag) cur = 0;
        
        turn = !turn;
    }
    
    cout << n - j << '\n' << n - i;
    
    return 0;
}
