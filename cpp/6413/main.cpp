#include <iostream>
#include <queue>
#include <map>

using namespace std;

string card;

queue<string> pile[13];

string cur, nxt;

map<char, int> num = {
{ 'A', 0 },
{ '2', 1 },
{ '3', 2 },
{ '4', 3 },
{ '5', 4 },
{ '6', 5 },
{ '7', 6 },
{ '8', 7 },
{ '9', 8 },
{ 'T', 9 },
{ 'J', 10 },
{ 'Q', 11 },
{ 'K', 12 }
};

int main()
{
    while(true){
        int res = 0;
            
        for(int i = 0; i < 4; i++){
            for(int j = 12; j > -1; j--){
                cin >> card;
                
                if(card == "#") return 0;
                
                pile[j].push(card);
            }
        }
        
        cur = "K";
        
        while(!pile[num[cur[0]]].empty()){
            nxt = pile[num[cur[0]]].front();
            pile[num[cur[0]]].pop();
            
            cur = nxt;
        
            res++;
        }
    
        for(int i = 0; i < 13; i++) while(!pile[i].empty()) pile[i].pop();
        
        cout.width(2);
        cout.fill('0');
        
        cout << res << ',' << cur << '\n';
    }
    
    
    return 0;
}
