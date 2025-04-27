#include <iostream>

using namespace std;

string n[5];

bool f = false;

int main()
{
    for(int i = 0; i < 5; i++) cin >> n[i];
    
    for(int i = 0; i < 5; i++){
        if(n[i].find("FBI") != string::npos){
            cout << i + 1 << ' ';
            
            f = true;
        }
    }
    
    if(!f) cout << "HE GOT AWAY!";
    
    return 0;
}
