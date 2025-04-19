#include <iostream>

using namespace std;

int n, d;

int s[30];

int sum = 0;

int main()
{
    cin >> n >> d;
    
    for(int i = 0; i < n; i++){
        cin >> s[i];
        
        sum += s[i];
    }
    
    for(int i = 0; i < n; i++) cout << d * s[i] / sum << '\n';
    
    return 0;
}
