#include <iostream>
#include <queue>

using namespace std;

int T;

int M;

priority_queue<int> l;
priority_queue<int, vector<int>, greater<int>> r;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> T;

    for(int i = 0; i < T; i++){
        while(!l.empty()) l.pop();
        while(!r.empty()) r.pop();

        cin >> M;

        int c;
        cin >> c;

        cout << (M - 1) / 2 + 1 << '\n';

        cout << c << ' ';

        for(int j = 0, cnt = 1; j < (M - 1) / 2; j++){
            for(int k = 0, t; k < 2; k++){
                cin >> t;

                if(t > c) r.push(t);
                else l.push(t);
            }

            while(l.size() > r.size()){
                r.push(c);
                c = l.top();
                l.pop();
            }
            while(l.size() < r.size()){
                l.push(c);
                c = r.top();
                r.pop();
            }

            if(cnt == 10){
                cout << '\n';
                cnt = 0;
            }

            cout << c << ' ';
            cnt++;
        }

        cout << '\n';
    }

    return 0;
}
