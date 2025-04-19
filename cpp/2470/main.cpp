#include <iostream>
#include <algorithm>

using namespace std;

int N;

int a[100000];

int res[3] = { 2000000000, 0, 1 };

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> a[i];
    
    sort(a, a + N);
    
    int i = 0, j = N - 1;
    
    while(i < j){
        int d = a[i] + a[j];
        
        if(abs(d) < res[0]){
            res[0] = abs(d);
            res[1] = i;
            res[2] = j;
        }
        
        if(d > 0) j--;
        else if(d < 0) i++;
        else break;
    }
    
    cout << a[res[1]] << ' ' << a[res[2]];
    
    return 0;
}
