#include <iostream>
#include <deque>

using namespace std;

string S;

int M;

char C, c;

deque<char> l, r;

int main()
{
    cin >> S;
    
    cin >> M;
    
    for(char t: S) l.push_back(t);
    
    for(int i = 0; i < M; i++){
        cin >> C;
        
        if(C == 'P'){
            cin >> c;
            
            l.push_back(c);
        } else if(C == 'L'){
            if(!l.empty()){
                r.push_front(l.back());
                l.pop_back();
            }
        } else if(C == 'D'){
            if(!r.empty()){
                l.push_back(r.front());
                r.pop_front();
            }
        } else if(C == 'B'){
            if(!l.empty()) l.pop_back();
        }
    }
    
    while(!l.empty()){
        cout << l.front();
        l.pop_front();
    }
    while(!r.empty()){
        cout << r.front();
        r.pop_front();
    }
    
    return 0;
}
