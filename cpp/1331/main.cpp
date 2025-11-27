#include <iostream>
#include <set>

using namespace std;

string pos, visit;

bool res = true;

set<string> visited;

string start;

int main()
{
    cin >> pos;
    
    start = pos;
    
    visited.insert(pos);
    
    for(int i = 1; i < 36; i++){
        cin >> visit;
        
        visited.insert(visit);
        
        if(!((abs(pos[0] - visit[0]) == 2 && abs(pos[1] - visit[1]) == 1) || (abs(pos[0] - visit[0]) == 1 && abs(pos[1] - visit[1]) == 2))) res = false;
    
        pos = visit;
    }
    
    if(visited.size() != 36) res = false;
    if(!((abs(pos[0] - start[0]) == 2 && abs(pos[1] - start[1]) == 1) || (abs(pos[0] - start[0]) == 1 && abs(pos[1] - start[1]) == 2))) res = false;
    
    cout << (res ? "Valid" : "Invalid");
    
    return 0;
}
