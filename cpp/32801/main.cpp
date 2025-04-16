#include <iostream>

using namespace std;

int n, a, b;

int c[3] = { 0, 0, 0 };

int main()
{
    cin >> n >> a >> b;
    
    for(int i = 1; i <= n; i++){
        if(i % a == 0 && i % b == 0) c[0]++;
        else if(i % a == 0) c[1]++;
        else if(i % b == 0) c[2]++;
    }
    
    cout << c[1] << ' ' << c[2] << ' ' << c[0];
    
    return 0;
}
