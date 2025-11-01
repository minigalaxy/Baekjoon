#include <iostream>

using namespace std;

int N;

string o;

bool used[26] = { false, };

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        getline(cin, o);
        
        int k = -1;
        
        {
            int i = -1;
        
            do {
                i++;
                    
                if(!used[tolower(o[i]) - 'a']){
                    used[tolower(o[i]) - 'a'] = true;
                    k = i;
                    break;
                }
            } while((i = o.find(' ', i)) != string::npos);
        }
        
        if(k == -1){
            for(int i = 0; i < o.size(); i++){
                if(o[i] != ' '){
                    if(!used[tolower(o[i]) - 'a']){
                        used[tolower(o[i]) - 'a'] = true;
                        k = i;
                        break;
                    }
                }
            }
        }
        
        if(k != -1){
            o.insert(k, "[");
            o.insert(k + 2, "]");
        }
        
        cout << o << '\n';
    }
    
    return 0;
}
