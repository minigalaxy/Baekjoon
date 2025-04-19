#include <iostream>

using namespace std;

int N;

string S;

int main()
{
    cin >> N >> S;
    
    cout << ((S.find("ooo") != string::npos) ? "Yes" : "No");
    
    return 0;
}
