#include <iostream>

using namespace std;

int N;

bool res = false;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= 9; i++){
        if(N % i == 0 && N / i < 10) res = true;
    }
    
    cout << res;
    
    return 0;
}
