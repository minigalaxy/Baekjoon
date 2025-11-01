#include <iostream>
#include <algorithm>

using namespace std;

int n;

string w;

pair<string, string> W[1000];

int main()
{
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        for(int i = 0; i < n; i++){
            cin >> w;
            
            W[i].first = W[i].second = w;
            
            for(char &c: W[i].first) c = tolower(c);
        }
        
        cout << (*min_element(W, W + n)).second << '\n';
    }
    
    return 0;
}
