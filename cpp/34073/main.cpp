#include <iostream>

using namespace std;

int N;

string S[100];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> S[i];
    
    for(int i = 0; i < N; i++) cout << S[i] << "DORO ";
    
    return 0;
}
