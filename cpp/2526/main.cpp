#include <iostream>
#include <algorithm>

using namespace std;

int N, P;

int visited[97] = { 0, };

int main()
{
    cin >> N >> P;
    
    int c = N;
    
    if(c < 97) visited[c]++;
    
    while(true){
        c = (c * N) % P;
        
        if(visited[c] == 2) break;
        
        visited[c]++;
    }
    
    cout << count(visited, visited + 97, 2);
    
    return 0;
}
