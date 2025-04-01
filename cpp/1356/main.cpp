#include <iostream>
#include <string>
#include <stack>

using namespace std;

string N;

int l;
stack<int> r;

int main()
{
    cin >> N;
    
    r.push(1);
    l = 1;
    
    for(int i = N.size() - 1; i >= 0; i--) r.push(r.top() * (N[i] - '0'));
    
    bool f = false;
    
    for(int i = 0; i < N.size() - 1; i++){
        r.pop();
        l *= N[i] - '0';
        
        if(r.top() == l){
            f = true;
            break;
        }
    }
    
    cout << ((f) ? "YES" : "NO");
    
    return 0;
}
