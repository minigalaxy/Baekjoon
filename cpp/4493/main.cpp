#include <iostream>

using namespace std;

int t;

int n;

char P[2];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        int res = 0;
        
        for(int j = 0; j < n; j++){
            cin >> P[0] >> P[1];
            
            if(P[0] == 'R'){
                if(P[1] == 'P') res--;
                else if(P[1] == 'S') res++;
            } else if(P[0] == 'P'){
                if(P[1] == 'R') res++;
                else if(P[1] == 'S') res--;
            } else {
                if(P[1] == 'R') res--;
                else if(P[1] == 'P') res++;
            }
        }
        
        if(res > 0) cout << "Player 1\n";
        else if(res < 0) cout << "Player 2\n";
        else cout << "TIE\n";
    }
    
    return 0;
}
