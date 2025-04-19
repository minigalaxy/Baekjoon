#include <iostream>
#include <stack>

using namespace std;

int n, k;

string c;
int m;

stack<int> com;

int res = 0;

int main()
{
    cin >> n >> k;
    
    for(int i = 0; i < k; i++){
        cin >> c;
        
        if(c == "undo"){
            cin >> m;
            
            for(int j = 0; j < m; j++) com.pop();
        } else com.push(stoi(c));
    }
    
    while(!com.empty()){
        res += com.top();
        com.pop();
    }
    
    cout << (res % n + n) % n;
    
    return 0;
}
