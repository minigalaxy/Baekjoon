#include <iostream>

using namespace std;

string g1, g2;

int res;

int main()
{
    cin >> g1 >> g2;
    
    res = g1.size() + g2.size();
    
    for(int i = -int(g2.size()) + 1; i < int(g1.size()); i++){
        bool flag = true;
            
        for(int j = 0; j < g2.size(); j++){
            if(-1 < i + j && i + j < g1.size()){
                if(g1[i + j] - '0' + g2[j] - '0' > 3) flag = false;
            }
        }
    
        if(flag) res = min(res, max(int(g1.size()), i + int(g2.size())) - min(i, 0));
    }
    
    cout << res;
    
    return 0;
}
