#include <iostream>
#include <queue>

using namespace std;

int N;

priority_queue<int, vector<int>, greater<int>> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        q.push(t);
    }

    for(int i = 0; i < N * N - N; i++){
        int t;
        cin >> t;

        if(t > q.top()){
            q.pop();
            q.push(t);
        }
    }

    cout << q.top();

    return 0;
}
