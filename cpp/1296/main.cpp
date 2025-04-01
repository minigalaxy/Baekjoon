#include <iostream>
#include <string>
#include <vector>

using namespace std;

string name;

int N;

string s;

int r = -1;
string rt;

int L1 = 0, O1 = 0, V1 = 0, E1 = 0, L, O, V, E;

int main()
{
    cin >> name;
    
    for(int i = 0; i < name.size(); i++){
        if(name[i] == 'L') L1++;
        else if(name[i] == 'O') O1++;
        else if(name[i] == 'V') V1++;
        else if(name[i] == 'E') E1++;
    }
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> s;
        
        L = L1;
        O = O1;
        V = V1;
        E = E1;
        
        for(int j = 0; j < s.size(); j++){
            if(s[j] == 'L') L++;
            else if(s[j] == 'O') O++;
            else if(s[j] == 'V') V++;
            else if(s[j] == 'E') E++;
        }
        
        int t = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
        
        if(t > r){
            r = t;
            rt = s;
        } else if(t == r){
            if(rt.compare(s) > 0) rt = s;
        }
    }
    
    cout << rt;
    
    return 0;
}
