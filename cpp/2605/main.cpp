#include <iostream>
#include <stack>

using namespace std;

int N;

int num;

stack<int> L, tmp;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        cin >> num;
            
        for(int j = 0; j < num; j++){
            tmp.push(L.top());
            L.pop();
        }
        
        L.push(i);
        
        for(int j = 0; j < num; j++){
            L.push(tmp.top());
            tmp.pop();
        }
    }
    
    for(int i = 0; i < N; i++){
        tmp.push(L.top());
        L.pop();
    }
    
    for(int i = 0; i < N; i++){
        cout << tmp.top() << ' ';
        tmp.pop();
    }
    
    return 0;
}
