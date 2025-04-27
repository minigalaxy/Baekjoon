#include <iostream>
#include <vector>

using namespace std;

int N;

string t;

vector<string> w;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> t;
            
        bool f = true;
            
        for(string s: w){
            if(s.size() / 2 == t.size() && s.find(t) != string::npos) f = false;
        }
    
        if(f) w.push_back(t + t);
    }
    
    cout << w.size();
    
    return 0;
}
