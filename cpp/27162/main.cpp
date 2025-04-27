#include <iostream>
#include <algorithm>

using namespace std;

string p;

int n[3];

int res = 0;

int main()
{
    cin >> p;
    
    cin >> n[0] >> n[1] >> n[2];
    
    sort(n, n + 3);
    
    if(p[0] == 'Y') res = max(res, (int(count(n, n + 3, 1)) + 2));
    if(p[1] == 'Y') res = max(res, 2 * (int(count(n, n + 3, 2)) + 2));
    if(p[2] == 'Y') res = max(res, 3 * (int(count(n, n + 3, 3)) + 2));
    if(p[3] == 'Y') res = max(res, 4 * (int(count(n, n + 3, 4)) + 2));
    if(p[4] == 'Y') res = max(res, 5 * (int(count(n, n + 3, 5)) + 2));
    if(p[5] == 'Y') res = max(res, 6 * (int(count(n, n + 3, 6)) + 2));
    if(p[6] == 'Y'){
        if(n[0] == n[1] || n[1] == n[2]) res = max(res, n[1] * 4);
    }
    if(p[7] == 'Y'){
        if(n[0] == n[1] && n[1] == n[2]){
            if(n[0] != 6) res = max(res, 12 + 3 * n[0]);
            else res = max(res, 10 + 3 * n[0]);
        } else if(n[0] == n[1] || n[1] == n[2]) res = max(res, 3 * n[2] + 2 * n[0]);
    }
    if(p[8] == 'Y'){
        if(n[0] != n[1] && n[1] != n[2] && n[2] <= 5) res = max(res, 30);
    }
    if(p[9] == 'Y'){
        if(n[0] != n[1] && n[1] != n[2] && n[2] <= 6 && n[0] >= 2) res = max(res, 30);
    }
    if(p[10] == 'Y'){
        if(n[0] == n[1] && n[1] == n[2]) res = max(res, 50);
    }
    if(p[11] == 'Y') res = max(res, n[0] + n[1] + n[2] + 12);
    
    cout << res;
    
    return 0;
}
