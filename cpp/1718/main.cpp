#include <iostream>

using namespace std;

string str, key;

int main()
{
    getline(cin, str);
    
    cin >> key;
    
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' ') cout << char(str[i] - key[i % key.size()] - 1 < 0 ? str[i] - (key[i % key.size()] - 'a') + 25 : str[i] - (key[i % key.size()] - 'a') - 1);
        else cout << ' ';
    }
    
    return 0;
}
