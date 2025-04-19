#include <iostream>

using namespace std;

int n[4];

int main()
{
    for(int i = 0; i < 4; i++) cin >> n[i];
    
    if((n[0] == 8 || n[0] == 9) && n[1] == n[2] && (n[3] == 8 || n[3] == 9)) cout << "ignore";
    else cout << "answer";
    
    return 0;
}
