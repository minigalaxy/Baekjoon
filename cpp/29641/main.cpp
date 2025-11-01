#include <iostream>
#include <vector>

using namespace std;

int K;

string t;

vector<string> S;

string l;

int main()
{
    cin >> K;
    
    while(cin >> t) S.push_back(t);
    
    for(string c: S){
        if(l.empty()) l += c;
        else {
            if(l.size() + 1 + c.size() > K){
                cout << l << '\n';
                
                l = c;
            } else {
                l.push_back(' ');
                l += c;
            }
        }
    }
    
    cout << l;
    
    return 0;
}
