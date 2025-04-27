#include <iostream>
#include <queue>

using namespace std;

int N;

priority_queue<int, vector<int>, greater<int>> c;

long long res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int t;
        cin >> t;
        
        c.push(t);
    }
    
    while(c.size() >= 2){
        int A = c.top();
        c.pop();
        int B = c.top();
        c.pop();
        
        res += A + B;
        
        c.push(A + B);
    }

    cout << res;
    
    return 0;
}
