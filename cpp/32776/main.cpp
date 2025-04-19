#include <iostream>

using namespace std;

int S;

int M[2], F;

int main()
{
    cin >> S >> M[0] >> F >> M[1];
    
    cout << (((M[0] + F + M[1] >= S) || S <= 240) ? "high speed rail" : "flight");
    
    return 0;
}
