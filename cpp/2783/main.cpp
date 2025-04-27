#include <iostream>

using namespace std;

double X[101], Y[101];

int N;

double res = 100000;

int main()
{
    cin >> X[0] >> Y[0];
    
    cin >> N;
    
    for(int i = 1; i <= N; i++) cin >> X[i] >> Y[i];
    
    for(int i = 0; i <= N; i++) res = min(res, 1000 / Y[i] * X[i]);
    
    cout << res;
    
    return 0;
}
