#include <iostream>

using namespace std;

int N;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        res += i * (i + 1) + i * (i + 1) / 2;
    }
    
    cout << res;
    
    return 0;
}
