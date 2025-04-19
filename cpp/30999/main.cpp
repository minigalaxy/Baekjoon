#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

string s;

int res = 0;

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < N; i++){
        cin >> s;
        
        if(count(s.begin(), s.end(), 'O') > M / 2) res++;
    }
    
    cout << res;
    
    return 0;
}
