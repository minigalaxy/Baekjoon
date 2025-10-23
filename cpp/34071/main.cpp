#include <iostream>
#include <algorithm>

using namespace std;

int N;

int X[100];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> X[i];
    
    if(X == min_element(X, X + N)) cout << "ez";
    else if(X == max_element(X, X + N)) cout << "hard";
    else cout << "?";
    
    return 0;
}
