#include <iostream>

using namespace std;

int N, A, B, C, D;

int main()
{
    cin >> N >> A >> B >> C >> D;
    
    cout << min(((N / A) + (N % A > 0)) * B, ((N / C) + (N % C > 0)) * D);
    
    return 0;
}
