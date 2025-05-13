#include <iostream>
#include <map>

using namespace std;

int N;

map<string, int> C;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        string S;
        cin >> S;
        
        res = max(res, ++C[S]);
    }
    
    for(pair<string, int> p: C){
        if(p.second == res){
            cout << p.first;
            
            return 0;
        }
    }
    
    return 0;
}
