#include <iostream>
#include <map>

using namespace std;

int P;

string s;

map<string, int> cnt;

int main()
{
    cin >> P;
    
    for(int i = 0; i < P; i++){
        cnt.clear();
        
        cin >> s;
        
        for(int j = 0; j < s.size(); j++) cnt[s.substr(j, 3)]++;
        
        cout << cnt["TTT"] << ' ' << cnt["TTH"] << ' ' << cnt["THT"] << ' ' << cnt["THH"] << ' ' << cnt["HTT"] << ' ' << cnt["HTH"] << ' ' << cnt["HHT"] << ' ' << cnt["HHH"] << '\n';
    }
    
    return 0;
}
