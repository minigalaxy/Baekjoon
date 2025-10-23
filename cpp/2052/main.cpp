#include <iostream>

using namespace std;

int N;

string res = "1";

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        string tmp;
        
        int cur;
        bool carry = false;
        
        for(char c: res){
            cur = c - '0';
                
            if(carry){
                carry = cur % 2;
                cur /= 2;
                cur += 5;
            } else {
                carry = cur % 2;
                cur /= 2;
            }
            
            tmp.push_back(cur + '0');
        }
        
        if(carry) tmp.push_back('5');
        
        res = tmp;
    }
    
    res.insert(1, ".");
    
    cout << res;
    
    return 0;
}
