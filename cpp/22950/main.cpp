#include <iostream>

using namespace std;

int N;

string M;

int K;

int main()
{
    cin >> N >> M >> K;
    
    for(int i = 0; i < K && i < N; i++){
        if(M[N - i - 1] == '1'){
            cout << "NO";
            
            return 0;
        }
    }
    
    cout << "YES";
    
    return 0;
}
