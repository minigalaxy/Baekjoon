#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string S;

vector<string> V; 

int main()
{
    cin >> S;
    
    for(int i = 1; i < S.size() - 1; i++){
        for(int j = i + 1; j < S.size(); j++){
            string a, b, c;
            
            a = S.substr(0, i);
            b = S.substr(i, j - i);
            c = S.substr(j, S.size());
            
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            reverse(c.begin(), c.end());
            
            V.push_back(a + b + c);
        }
    }
    
    sort(V.begin(), V.end());
    
    cout << V.front();
    
    return 0;
}
