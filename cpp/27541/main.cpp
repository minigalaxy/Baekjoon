#include <iostream>

using namespace std;

int N;

string S;

int main()
{
    cin >> N >> S;
    
    if(S.back() == 'G') S.pop_back();
    else S.push_back('G');
    
    cout << S;
    
    return 0;
}
