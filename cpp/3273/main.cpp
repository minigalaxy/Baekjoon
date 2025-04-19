#include <iostream>
#include <algorithm>

using namespace std;

int n;

int a[100000];

int x;

int res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> a[i];
    
    cin >> x;
    
    sort(a, a + n);
    
    int i = 0, j = n - 1;
    
    while(i < j){
        int t = a[i] + a[j];
        
        if(t > x) j--;
        else if(t < x) i++;
        else {
            res++;
            i++;
            j--;
        }
    }
    
    cout << res;
    
    return 0;
}
