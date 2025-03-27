#include <iostream>

using namespace std;

int S, F;

int main()
{
    cin >> S >> F;
    
    cout << ((S <= F) ? "high speed rail" : "flight");
    
    return 0;
}
