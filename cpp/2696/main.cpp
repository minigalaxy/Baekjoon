#include <iostream>
#include <queue>

using namespace std;

int T;

int M;

priority_queue<long long> l;
priority_queue<long long, vector<long long>, greater<long long>> r;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        while(!l.empty()) l.pop();
        while(!r.empty()) r.pop();

        cin >> M;

        long long c;
        cin >> c;

        cout << c;

        for(int j = 1; j < M; j++){
            int t;
            cin >> t;


        }
    }

    return 0;
}
