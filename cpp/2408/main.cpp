#include <iostream>

using namespace std;

int N;

long long res = 0, c, t;
char o;

int main()
{
    cin >> N;
    
    cin >> c
    ;
    
    for(int i = 1; i < N; i++){
        cin >> o >> t;
        
        if(o == '+'){
            res += c;
            c = t;
        } else if(o == '-'){
            res += c;
            c = -t;
        } else if(o == '*'){
            c *= t;
        } else {
            c /= t;
        }
    }
    
    res += c;
    
    cout << res;
    
    return 0;
}
