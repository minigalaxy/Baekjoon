#include <iostream>

using namespace std;

int q;

string quote[50];

int r;

int rule;

int main()
{
    cin >> q;
    cin.ignore();
    
    for(int i = 0; i < q; i++) getline(cin, quote[i]);
    
    cin >> r;
    
    for(int i = 0; i < r; i++){
        cin >> rule;
        
        if(0 < rule && rule <= q) cout << "Rule " << rule << ": " << quote[rule - 1] << '\n';
        else cout << "Rule " << rule << ": No such rule\n";
    }
    
    return 0;
}
