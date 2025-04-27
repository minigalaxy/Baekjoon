#include <iostream>

using namespace std;

int N;

int card[13];

int solve(int n){
    int sum = 0;
    
    if(n >= 4){
        for(int i = 0; i < 13; i++){
            if(card[i] == 4){
                card[i] -= 4;
                sum += solve(n - 4);
                card[i] += 4;
            }
        }
    }
    
}

int main()
{
    cin >> N;
    
    solve(N, 0);
    
    return 0;
}
