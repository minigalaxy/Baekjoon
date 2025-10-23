#include <iostream>

using namespace std;

int N, K;

int n;

int main()
{
    cin >> N >> K;
    
    for(int i = 0; i < K; i++){
        cin >> n;
        
        cout << (n > (1 + N) / 2 ? N : 1) << ' ';
    }
    
    return 0;
}
