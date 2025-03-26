#include <iostream>
#include <queue>

using namespace std;

long long A, B;

queue<long long> visit;

int bfs(){
    int cnt = 0;

    visit.push(A);

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            long long v = visit.front();
            visit.pop();

            if(v == B) return cnt + 1;
            if(v > B) continue;

            visit.push(v * 2);
            visit.push(v * 10 + 1);
        }

        cnt++;
    }

    return -1;
}

int main()
{
    cin >> A >> B;

    cout << bfs();

    return 0;
}
