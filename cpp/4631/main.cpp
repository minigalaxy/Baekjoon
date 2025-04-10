#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int n;

string s;

queue<string> a;
stack<string> b;

int i = 1;

int main()
{
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        for(int j = 0; j < n; j++){
            cin >> s;
                
            if(j % 2 == 0) a.push(s);
            else b.push(s);
        }
    
        cout << "SET " << i++ << '\n';
        
        while(!a.empty()){
            cout << a.front() << '\n';
            a.pop();
        }
        while(!b.empty()){
            cout << b.top() << '\n';
            b.pop();
        }
    }
    return 0;
}
