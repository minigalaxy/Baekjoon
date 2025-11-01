#include <iostream>
#include <algorithm>

using namespace std;

int N;

int b[1000];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> b[i];
    
    cout << 2 * (*max_element(b, b + N) - *min_element(b, b + N));
    
    return 0;
}
