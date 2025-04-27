#include <iostream>

using namespace std;

int A, B, C, D;

int P, M, N;

int main()
{
    cin >> A >> B >> C >> D;
    
    cin >> P >> M >> N;
    
    P--;
    M--;
    N--;
    
    cout << (P % (A + B) < A) + (P % (C + D) < C) << '\n';
    cout << (M % (A + B) < A) + (M % (C + D) < C) << '\n';
    cout << (N % (A + B) < A) + (N % (C + D) < C) << '\n';
    
    return 0;
}
