#include <iostream>
#include <algorithm>

using namespace std;

int N, A, B;

int a = 1, b = 1;

int main()
{
    cin >> N >> A >> B;
    
    for(int i = 0; i < N; i++){
        a += A;
        b += B;
        
        if(b > a) swap(a, b);
        else if(a == b) b--;
    }
    
    cout << a << ' ' << b;
    
    return 0;
}
