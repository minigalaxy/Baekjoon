#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int R, C;

string p[20];

vector<string> w;

int main()
{
    cin >> R >> C;
    
    for(int i = 0; i < R; i++) cin >> p[i];
    
    for(int i = 0; i < R; i++){
        string t;
            
        for(int j = 0; j < C; j++){
            if(p[i][j] != '#') t.push_back(p[i][j]);
            else {
                if(t.size() > 1) w.push_back(t);
                
                t.clear();
            }
        }
        
        if(t.size() > 1) w.push_back(t);
    }
    for(int i = 0; i < C; i++){
        string t;
            
        for(int j = 0; j < R; j++){
            if(p[j][i] != '#') t.push_back(p[j][i]);
            else {
                if(t.size() > 1) w.push_back(t);
                
                t.clear();
            }
        }
        
        if(t.size() > 1) w.push_back(t);
    }
    
    cout << *min_element(w.begin(), w.end());
    
    return 0;
}
