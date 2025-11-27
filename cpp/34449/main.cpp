#include <iostream>

using namespace std;

const double PI = 3.14159;

double d, w;
int n;

int main()
{
    cin >> d >> w >> n;
    
    if(d * PI >= w * n) cout << "YES";
    else cout << "NO";
    
    return 0;
}
