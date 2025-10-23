#include <iostream>

using namespace std;

int J, N;

string s;

int res = 0;

int main()
{
    cin >> J >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        getline(cin, s);
        
        int l = 0;
        
        for(char c: s){
            if(c == ' ') l++;
            else if('A' <= c && c <= 'Z') l += 4;
            else l += 2;
        }
        
        if(l <= J) res++;
    }
    
    cout << res;
    
    return 0;
}
