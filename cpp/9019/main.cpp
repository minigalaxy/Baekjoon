#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <tuple>

using namespace std;

int T;

int A, B;

queue<pair<int, string>> visit;
bool visited[10000] = { false, };

vector<string> res;

string bfs(){
    visit.push(make_pair(A, ""));
    visited[A] = true;

    while(!visit.empty()){
        int v;
        string command;

        tie(v, command) = visit.front();
        visit.pop();

        if(v == B) return command;

        if(!visited[(v * 2) % 10000]){
            visit.push(make_pair((v * 2) % 10000, command + "D"));
            visited[(v * 2) % 10000] = true;
        }
        if(!visited[(v > 0) ? v - 1 : 9999]){
            visit.push(make_pair((v > 0) ? v - 1 : 9999, command + "S"));
            visited[(v > 0) ? v - 1 : 9999] = true;
        }

        int L = (v % 1000) * 10 + v / 1000;

        if(!visited[L]){
            visit.push(make_pair(L, command + "L"));
            visited[L] = true;
        }

        int R = v / 10 + (v % 10) * 1000;

        if(!visited[R]){
            visit.push(make_pair(R, command + "R"));
            visited[R] = true;
        }
    }
}

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        fill(visited, visited + 10000, false);

        while(!visit.empty()) visit.pop();

        cin >> A >> B;

        res.push_back(bfs());
    }

    for(string t: res) cout << t << '\n';

    return 0;
}
