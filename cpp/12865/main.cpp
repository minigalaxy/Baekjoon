#include <iostream>
#include <vector>

using namespace std;

int N, K;
int W, V;

int obj[100][2];
int memory[100001] = { -1, };
bool visited[100] = { false, };

int res = 0;

void bt(int w, int v){
    if(w > K) return;

    if(v > memory[w]){
        memory[w] = v;

        if(v > res) res = v;
    } else return;

    for(int i = 0; i < N; i++){
        if(!visited[i]){
            visited[i] = true;
            bt(w + obj[i][0], v + obj[i][1]);
            visited[i] = false;
        }
    }
}

int main()
{
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> obj[i][0] >> obj[i][1];
    }

    bt(0, 0);

    cout << res;

    return 0;
}
