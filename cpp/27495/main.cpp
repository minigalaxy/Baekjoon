#include <iostream>
#include <string>
#include <queue>

using namespace std;

string m[9][9];

int main()
{
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++) cin >> m[j][i];
    }
    
    priority_queue<pair<string, int>, vector<pair<string, int>>, greater<pair<string, int>>> mt;
    
    for(int i = 0; i < 9; i++){
        if(i != 4) mt.push({m[3 + i % 3][3 + i / 3], i});
    }
    
    for(int i = 1; i <= 8; i++){
        pair<string, int> p = mt.top();
        mt.pop();
        
        cout << '#' << i << ". " << p.first << '\n';
        
        priority_queue<string, vector<string>, greater<string>> s;
        
        for(int j = 0; j < 9; j++){
            if(j != 4) s.push(m[3 + (p.second % 3 - 1) * 3 + j % 3][3 + (p.second / 3 - 1) * 3 + j / 3]);
        }
        
        for(int j = 1; j <= 8; j++){
            cout << '#' << i << '-' << j << ". " << s.top() << '\n';
            s.pop();
        }
    }
    
    return 0;
}
