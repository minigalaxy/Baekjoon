#include <iostream>
#include <stack>

using namespace std;

int N;

string S;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> S;
        
        stack<char> p;
        
        for(char c: S){
            if(!p.empty()){
                if(p.top() == c) p.pop();
                else p.push(c);
            } else p.push(c);
        }
        
        if(p.empty()) res++;
    }
    
    cout << res;
    
    return 0;
}
