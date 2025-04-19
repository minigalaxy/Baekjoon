#include <iostream>

using namespace std;

int N;

string S;

int main()
{
    cin >> N >> S;
    
    for(int i = S.size() - 5; i < S.size(); i++) cout << S[i];
    
    return 0;
}
