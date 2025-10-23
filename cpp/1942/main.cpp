#include <iostream>

using namespace std;

string s, e;

int st[3], et[3];

int main()
{
    for(int i = 0; i < 3; i++){
        int res = 0;
            
        cin >> s >> e;
        
        st[0] = stoi(s.substr(0, 2));
        st[1] = stoi(s.substr(3, 2));
        st[2] = stoi(s.substr(6, 2));
        
        et[0] = stoi(e.substr(0, 2));
        et[1] = stoi(e.substr(3, 2));
        et[2] = stoi(e.substr(6, 2));
        
        while(st[0] != et[0] || st[1] != et[1] || st[2] != et[2]){
            if((st[0] * 10000 + st[1] * 100 + st[2]) % 3 == 0) res++;
    
            if(++st[2] == 60){
                st[2] = 0;
                    
                if(++st[1] == 60){
                    st[1] = 0;
                    
                    st[0] = (st[0] + 1) % 24;
                }
            }
        }
        
        if((et[0] * 10000 + et[1] * 100 + et[2]) % 3 == 0) res++;
        
        cout << res << '\n';
    }
    return 0;
}
