#include <iostream>
#include <set>

using namespace std;

int N;

int A;

set<int> res;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A;
        
        res.insert(A);
    }
    
    for(int r: res) cout << r << '\n';
    
    return 0;
}
