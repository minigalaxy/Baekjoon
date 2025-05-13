#include <iostream>
#include <stack>

using namespace std;

int N;

string F;

double V[26];

stack<double> S; 

int main()
{
    cin >> N;
    
    cin >> F;
    
    for(int i = 0; i < N; i++) cin >> V[i];
    
    for(char c: F){
        if(c == '+'){
            double v = S.top();
            S.pop();
            
            S.top() += v;
        } else if(c == '-'){
            double v = S.top();
            S.pop();
            
            S.top() -= v;
        } else if(c == '*'){
            double v = S.top();
            S.pop();
            
            S.top() *= v;
        } else if(c == '/'){
            double v = S.top();
            S.pop();
            
            S.top() /= v;
        } else S.push(V[c - 'A']);
    }
    
    cout.precision(2);
    cout << fixed;
    
    cout << S.top();
    
    return 0;
}
