#include <iostream>
#include <queue>

using namespace std;

int N;

int t;

priority_queue<int> l;
priority_queue<int, vector<int>, greater<int>> r;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;
    
    int c;
    cin >> c;
    
    cout << c << '\n';

    for(int i = 1; i < N; i++){
        cin >> t;

        if(t > c) r.push(t);
        else l.push(t);
        
        while(l.size() < r.size()){
            l.push(c);
            c = r.top();
            r.pop();
        }
        while(l.size() > r.size()){
            r.push(c);
            c = l.top();
            l.pop();
        }

        cout << c << '\n';
    }

    return 0;
}
