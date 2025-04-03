#include <iostream>

using namespace std;

string N;

int w;

int main()
{
    while(true){
        w = 1;
            
        cin >> N;
        
        if(N == "0") break;
        
        for(int i = 0; i < N.size(); i++){
            if(N[i] == '1') w += 2;
            else if(N[i] == '0') w += 4;
            else w += 3;
            
            w += 1;
        }
        
        cout << w << '\n';
    }
    return 0;
}
