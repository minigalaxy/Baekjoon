#include <iostream>

using namespace std;

int num[27] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };
int repeat[26] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4 };

int p, w;

string s;

char prv;

int res = 0;

int main()
{
    cin >> p >> w;
    cin.ignore();
    
    getline(cin, s);
    
    for(char c: s){
        if(c != ' '){
            if(prv >= 'A' && num[prv - 'A'] == num[c - 'A']) res += w;
            
            res += p * repeat[c - 'A'];
        }
        
        else res += p;
        
        prv = c;
    }
    
    cout << res;
    
    return 0;
}
