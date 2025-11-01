#include <iostream>

using namespace std;

int n;

int w;

int x[2];

int res = 0;

int main()
{
    cin >> n;
    
    cin >> x[0] >> x[1];
    
    for(int i = 2; i < n; i++){
        cin >> w;
        
        if(x[0] <= x[1]) x[0] += w;
        else x[1] += w;
    }
    
    int d = abs(x[0] - x[1]);
    
    res += d / 100;
    
    d %= 100;
    
    res += d / 50;
    
    d %= 50;
    
    res += d / 20;
    
    d %= 20;
    
    res += d / 10;
    
    d %= 10;
    
    res += d / 5;
    
    d %= 5;
    
    res += d / 2;
    
    d %= 2;
    
    res += d;
    
    cout << res;
    
    return 0;
}
