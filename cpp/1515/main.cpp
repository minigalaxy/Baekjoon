#include <iostream>
#include <queue>

using namespace std;

string S;

queue<char> Q;

int main()
{
    cin >> S;
    
    int N = 0;
    
    for(char c: S){
        while(true){
            if(Q.empty()){
                string t = to_string(++N);
                
                for(char c2: t) Q.push(c2);
            } else {
                int cur = Q.front();
                Q.pop();
                
                if(cur == c) break;
            }
        }
    }
    
    cout << N;
    
    return 0;
}
