#include <iostream>

using namespace std;

int N;

int A, B;

int res = 1001;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A >> B;
        
        if(A <= B) res = min(res, B);
    }
    
    cout << ((res > 1000) ? -1 : res);
    
    return 0;
}
