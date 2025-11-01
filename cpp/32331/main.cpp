#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, X, Y;

int h;

vector<int> s;

string c;

int res;

int main()
{
    cin >> N >> M >> X >> Y;
    
    cin >> c >> h;
    
    for(int i = 0; i < N - 1; i++){
        int t;
        cin >> c >> t;
    
        if(c.find("2024") == 0) s.push_back(t + max(0, Y - (X - t)));
    }
    
    sort(s.begin(), s.end(), greater<>());
    
    if(s.size() < M) cout << "YES" << '\n' << 0;
    else {
        res = max(0, s[M - 1] - h);
        
        if(res > Y) cout << "NO";
        else cout << "YES" << '\n' << res;
    }
    
    return 0;
}
