#include <iostream>

using namespace std;

int N;

int A, B, X;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A >> B >> X;
        
        cout << A * (X - 1) + B << '\n';
    }
    
    return 0;
}
