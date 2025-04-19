#include <iostream>

using namespace std;

int n;

int a[100], b[100];

bool res = true;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    
    for(int i = 0; i < n - 1; i++){
        if(a[i + 1] < a[i] || b[i + 1] < b[i]) res = false;
    }
    
    cout << ((res) ? "yes" : "no");
    
    return 0;
}
