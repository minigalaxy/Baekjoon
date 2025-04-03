#include <iostream>

using namespace std;

int N;

long long sum;

int main()
{
    for(int i = 0; i < 3; i++){
        sum = 0;
            
        cin >> N;
        
        for(int j = 0; j < N; j++){
            long long t;
            cin >> t;
            
            sum += t;
        }
        
        if(sum > 0) cout << "+\n";
        else if(sum < 0) cout << "-\n";
        else cout << "0\n";
    }
    
    return 0;
}
