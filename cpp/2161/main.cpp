#include <iostream>
#include <queue>

using namespace std;

int N;

queue<int> Q;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++) Q.push(i);
    
    while(!Q.empty()){
        cout << Q.front() << ' ';
        Q.pop();
        
        if(Q.empty()) break;
            
        Q.push(Q.front());
        Q.pop();
    }
    
    return 0;
}
