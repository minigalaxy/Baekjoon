#include <iostream>

using namespace std;

int N;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        bool f = true;
        
        string s = to_string(i);
        
        int cd = (s[1] - '0') - (s[0] - '0');
        
        for(int i = 1; i < s.size() - 1; i++){
            if((s[i + 1] - '0') - (s[i] - '0') != cd){
                f = false;
                break;
            }
        }
        
        if(f) res++;
    }
    
    cout << res;
    
    return 0;
}
