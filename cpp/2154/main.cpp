#include <iostream>

using namespace std;

int N;

string S;

int main()
{
    cin >> N;
    
    for(int i = 1; i <= N; i++) S += to_string(i);
    
    cout << S.find(to_string(N)) + 1;
    
    return 0;
}
