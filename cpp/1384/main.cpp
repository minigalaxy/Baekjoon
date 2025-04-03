#include <iostream>
#include <vector>

using namespace std;

int n;

vector<string> name;
vector<int> nasty[20];

int g = 1;

int main()
{
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        cout << "Group " << g++ << '\n';
        
        for(int i = 0; i < n; i++){
            string t;
            cin >> t;
            
            name.push_back(t);
            
            for(int j = 1; j < n; j++){
                char m;
                cin >> m;
            
                if(m == 'N') nasty[i].push_back((i - j < 0) ? i - j + n : i - j);
            }
        }
        
        bool f = true;

        for(int i = 0; i < n; i++){
            for(int j: nasty[i]){
                cout << name[j] << " was nasty about " << name[i] << '\n';
                f = false;
            }
            
            nasty[i].clear();
        }
        
        name.clear();
        
        if(f) cout << "Nobody was nasty\n";
        
        cout << '\n';
    }
    return 0;
}
