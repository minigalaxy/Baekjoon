#include <iostream>

using namespace std;

int L;

int n;
char c;

int main()
{
    cin >> L;
    
    for(int i = 0; i < L; i++){
        cin >> n >> c;
        
        for(int j = 0; j < n; j++) cout << c;
        
        cout << '\n';
    }
    
    return 0;
}
