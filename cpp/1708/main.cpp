#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int N;

pair<int, int> D[100000];

stack<pair<int, int>> U, L;

long long ccw(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3){
    return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> D[i].first >> D[i].second;
    
    sort(D, D + N);
    
    U.push(D[0]);
    L.push(D[0]);
    
    for(int i = 1; i < N - 1; i++){
        if(ccw(D[0].first, D[0].second, D[i].first, D[i].second, D[N - 1].first, D[N - 1].second) > 0){
            //cout << D[i].first << ' ' << D[i].second << " ´Â ¾Æ·¡ÂÊ Á¡À¸·Î °£ÁÖµÊ.\n";
            
            while(L.size() > 1){
                pair<int, int> l = L.top();
                L.pop();
                
                if(ccw(L.top().first, L.top().second, l.first, l.second, D[i].first, D[i].second) > 0){
                    L.push(l);
                    
                    break;
                }
                
                //cout << l.first << ' ' << l.second << " »èÁ¦µÊ.\n";
            }
            
            if(ccw(L.top().first, L.top().second, D[i].first, D[i].second, D[N - 1].first, D[N - 1].second) > 0){
                //cout << D[i].first << ' ' << D[i].second << " Ãß°¡µÊ.\n";
                L.push(D[i]);
            }
        } else if(ccw(D[0].first, D[0].second, D[i].first, D[i].second, D[N - 1].first, D[N - 1].second) < 0){
            //cout << D[i].first << ' ' << D[i].second << " ´Â À§ÂÊ Á¡À¸·Î °£ÁÖµÊ.\n";
            
            while(U.size() > 1){
                pair<int, int> u = U.top();
                U.pop();
                
                if(ccw(U.top().first, U.top().second, u.first, u.second, D[i].first, D[i].second) < 0){
                    U.push(u);
                    
                    break;
                }
                
                //cout << u.first << ' ' << u.second << " »èÁ¦µÊ.\n";
            }
            
            if(ccw(U.top().first, U.top().second, D[i].first, D[i].second, D[N - 1].first, D[N - 1].second) < 0){
                //cout << D[i].first << ' ' << D[i].second << " Ãß°¡µÊ.\n";
                U.push(D[i]);
            }
        }
    }
    
    cout << U.size() + L.size();
    
    return 0;
}
