#include <iostream>

using namespace std;

int N;

char w;

int X = 0, Y = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> w;
        
        if(abs(X - Y) < 2){
            if(w == 'D') X++;
            else Y++;
        }
    }
    
    cout << X << ':' << Y;
    
    return 0;
}
