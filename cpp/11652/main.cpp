#include <iostream>
#include <map>

using namespace std;

int N;

map<long long, int> C;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        long long S;
        cin >> S;
        
        res = max(res, ++C[S]);
    }
    
    for(pair<long long, int> p: C){
        if(p.second == res){
            cout << p.first;
            
            return 0;
        }
    }
    
    return 0;
}
