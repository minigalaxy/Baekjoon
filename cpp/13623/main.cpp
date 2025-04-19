#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    cin >> A >> B >> C;
    
    if(A + B + C == 0 || A + B + C == 3) cout << '*';
    else if(A + B + C == 2){
        if(A == 0) cout << 'A';
        else if(B == 0) cout << 'B';
        else cout << 'C';
    } else if(A + B + C == 1){
        if(A == 1) cout << 'A';
        else if(B == 1) cout << 'B';
        else cout << 'C';
    }
    
    return 0;
}
