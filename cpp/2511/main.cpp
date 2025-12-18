#include <iostream>

using namespace std;

int A[10], B[10];

int s[2] = { 0, 0 };

int f = 0;

int main()
{
    for(int i = 0; i < 10; i++) cin >> A[i];
    for(int i = 0; i < 10; i++) cin >> B[i];
    
    for(int i = 0; i < 10; i++){
        if(A[i] > B[i]){
            s[0] += 3;
            f = 1;
        } else if(A[i] < B[i]){
            s[1] += 3;
            f = -1;
        } else {
            s[0]++;
            s[1]++;
        }
    }
    
    cout << s[0] << ' ' << s[1] << '\n';
    
    if(s[0] > s[1]) cout << 'A';
    else if(s[0] < s[1]) cout << 'B';
    else {
        if(f == 1) cout << 'A';
        else if(f == -1) cout << 'B';
        else cout << 'D';
    }
    
    return 0;
}
