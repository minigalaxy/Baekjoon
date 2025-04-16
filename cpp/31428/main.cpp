#include <iostream>
#include <map>

using namespace std;

int N;

map<char, int> cnt;

char r;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        char c;
        cin >> c;
        
        cnt[c]++;
    }
    
    cin >> r;
    
    cout << cnt[r];
    
    return 0;
}
