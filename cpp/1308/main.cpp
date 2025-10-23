#include <iostream>

using namespace std;

int cur[3], d[3];

int res = 0;

int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
    cin >> cur[0] >> cur[1] >> cur[2];
    cin >> d[0] >> d[1] >> d[2];
    
    if(d[0] - cur[0] > 1000) cout << "gg";
    else if(d[0] - cur[0] == 1000 &&
    (d[1] > cur[1] || (d[1] == cur[1] && d[2] >= cur[2]))) cout << "gg";
    else {
        while(cur[0] != d[0] || cur[1] != d[1]){
            if(cur[1] == 2){
                if(cur[0] % 400 == 0) res += 29;
                else if(cur[0] % 100 == 0) res += 28;
                else if(cur[0] % 4 == 0) res += 29;
                else res += 28;
            } else res += day[cur[1]];
            
            if(++cur[1] == 13){
                cur[0]++;
                cur[1] = 1;
            }
        }
        
        res += d[2] - cur[2];
        
        cout << "D-" << res;
    }
    
    
    return 0;
}
