#include <iostream>
#include <map>

using namespace std;

string S;

map<string, int> cnt;

double sum = 0;

int main()
{
    while(getline(cin, S)){
        cnt[S]++;
        sum++;
    }
    
    cout.precision(4);
    cout.setf(ios_base::fixed);
    
    for(pair<string, int> p: cnt){
        cout << p.first << ' ' << 100 * p.second / sum << '\n';
    }
    
    return 0;
}
