#include <iostream>
#include <algorithm>

using namespace std;

string N;

int cnt[10] = { 0, };

int main()
{
    cin >> N;
    
    for(char c: N) cnt[c - '0']++;
    
    cnt[6] = cnt[9] = (cnt[6] + cnt[9] + 1) / 2;
    
    cout << *max_element(cnt, cnt + 10);
    
    return 0;
}
