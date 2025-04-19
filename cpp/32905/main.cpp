#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

char c[100];

bool res = true;

int main()
{
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> c[j];
        
        if(count(c, c + m, 'A') != 1) res = false;
    }
    
    cout << ((res) ? "Yes" : "No");
    
    return 0;
}
