#include <iostream>
#include <queue>
#include <vector>
#include <set>

using namespace std;

int T;
int N, M;

vector<int> result;

int get_max(queue<int> q){
    int m = -1;

    for(int i = 0; i < q.size(); i++){
        if(q.front() > m) m = q.front();
        q.push(q.front());
        q.pop();
    }

    return m;
}

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        int r = 1;

        cin >> N >> M;

        queue<int> main_queue;
        int priority[10] = { 0, };

        for(int j = 0; j < N; j++){
            int t;
            cin >> t;

            main_queue.push(t);
            priority[t]++;
        }

        while(true){
            int f = main_queue.front();
            main_queue.pop();

            if(get_max(main_queue) > f) main_queue.push(f);
            else {
                if(M == 0) break;
                r++;
            }

            M = (M > 0) ? M - 1 : main_queue.size() - 1;
        }

        result.push_back(r);
    }

    for(int i = 0; i < T; i++) cout << result[i] << '\n';

    return 0;
}
