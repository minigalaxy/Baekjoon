#include <iostream>

using namespace std;

int N;

int w[1001] = { 1, };

int main()
{
    cin >> N;
    
    for(int i = 0; i < 1000; i++){
        if(w[i] == 1){
            w[i + 1] = 2;
            w[i + 3] = 2;
            w[i + 4] = 2;
        } else if(w[i] == 2){
            if(w[i + 1] == 0) w[i + 1] = 1;
            if(w[i + 3] == 0) w[i + 3] = 1;
            if(w[i + 4] == 0) w[i + 4] = 1;
        }
    }
    
    cout << ((w[N] == 1) ? "CY" : "SK");
    
    return 0;
}
