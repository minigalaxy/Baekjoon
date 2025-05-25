#include <iostream>
#include <vector>

using namespace std;

bool g = true;

int X, Y;

bool P[1001][1001];

vector<int> D;

int main()
{
    cin >> X >> Y;
    
    int d = 2, y = Y;
            
    while(y > 1){
        if(y % d == 0){
            D.push_back(d);
            
            while(y % d == 0) y /= d;
        }
        
        
        d++;
    }
    
    for(int m: D){
        for(int i = m; i <= Y; i += m) P[Y][i] = true;
    }
        
    while(true){
        D.clear();
            
        int d = 2, x = X;
            
        while(x > 1){
            if(x % d == 0){
                D.push_back(d);
                
                while(x % d == 0) x /= d;
            }
            
            
            d++;
        }
        
        for(int m: D){
            for(int i = m; i <= Y; i += m) P[X][i] = true;
        }
        
        if(!P[X][Y]){
            cout << ((g) ? "khj20006" : "putdata");
        
            return 0;
        }
        
        bool flag = false;
        
        for(int i = X + 1; i < Y; i++){
            if(P[Y][i] && !P[X][i]){
                X = i;
                
                flag = true;
                
                break;
            }
        }
        
        if(!flag){
            cout << ((g) ? "putdata" : "khj20006");
        
            return 0;
        }
        
        g = !g;
    }
    
    return 0;
}
