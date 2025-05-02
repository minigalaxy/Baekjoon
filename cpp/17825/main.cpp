#include <iostream>

using namespace std;
//                0  1  2  3  4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31
int score[33] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 13, 16, 19, 22, 24, 28, 27, 26, 25, 30, 35, 0 };

int blue[32] = { 0, };
/*
5 -> 21
10 -> 24
15 -> 26
**/

int way[32] = { 0, };
/*
21 -> 22
22 -> 23
23 -> 29

24 -> 25
25 -> 29

26 -> 27
27 -> 28
28 -> 29

29 -> 30
30 -> 31
31 -> 20
**/

int d[10];

int p[4] = { 0, };

int res = 0;

void dfs(int n, int cur){
    if(n == 10){
        res = max(res, cur);
    
        return;
    }
    
    for(int i = 0; i < 4; i++){
        int t = p[i];
            
        if(p[i] < 32){
            if(blue[p[i]] > 0){
                p[i] = blue[p[i]];
                
                for(int j = 1; j < d[n]; j++){
                    if(way[p[i]] > 0) p[i] = way[p[i]];
                    else p[i]++;
                    
                    if(p[i] == 32) break;
                }
            } else {
                for(int j = 0; j < d[n]; j++){
                    if(way[p[i]] > 0) p[i] = way[p[i]];
                    else p[i]++;
                    
                    if(p[i] == 32) break;
                }
            }
        }
        
        if(!(p[i] == p[(i + 1) % 4] || p[i] == p[(i + 2) % 4] || p[i] == p[(i + 3) % 4]) || p[i] == 32) dfs(n + 1, cur + score[p[i]]);
        
        p[i] = t;
    }
}

int main()
{
    blue[5] = 21;
    blue[10] = 24;
    blue[15] = 26;
    
    way[21] = 22;
    way[22] = 23;
    way[23] = 29;
    
    way[24] = 25;
    way[25] = 29;
    
    way[26] = 27;
    way[27] = 28;
    way[28] = 29;
    
    way[29] = 30;
    way[30] = 31;
    way[31] = 20;
    
    way[20] = 32;
    
    for(int i = 0; i < 10; i++) cin >> d[i];
    
    dfs(0, 0);
    
    cout << res;
    
    return 0;
}
