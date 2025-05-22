#include <iostream>

using namespace std;

int N;

int A[499][499];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    
    return 0;
}
