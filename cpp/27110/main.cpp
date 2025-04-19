#include <iostream>

using namespace std;

int N;

int A, B, C;

int main()
{
    cin >> N;
    
    cin >> A >> B >> C;
    
    cout << min(N, A) + min(N, B) + min(N, C);
    
    return 0;
}
