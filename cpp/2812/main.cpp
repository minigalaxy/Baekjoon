#include <iostream>
#include <stack>

using namespace std;

int N, K;

int num[500000];

stack<int> S;

int main()
{
    cin >> N >> K;
    cin.ignore();
    
    for(int i = 0; i < N; i++) num[i] = getchar() - '0';
    
    for(int i = 0; i < N; i++){
        while(!S.empty() && S.size() + N - i > N - K && num[i] > S.top()) S.pop();
            
        if(S.size() < N - K) S.push(num[i]);
    }
    
    stack<int> tmp;
    
    while(!S.empty()){
        tmp.push(S.top());
        S.pop();
    }
    
    while(!tmp.empty()){
        cout << tmp.top();
        tmp.pop();
    }
    
    return 0;
}
