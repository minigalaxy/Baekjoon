#include <iostream>
#include <vector>

using namespace std;

int M, N;

vector<int> s;

vector<vector<int>> seq;

void bt(int cnt){
    if(cnt == N){
        seq.push_back(s);
        return;
    }

    for(int i = s.back(); i <= M; i++){
        s.push_back(i);
        bt(cnt + 1);
        s.pop_back();
    }
}

int main()
{
    cin >> M >> N;

    s.push_back(1);

    bt(0);

    for(vector<int> v: seq){
        for(int i = 1; i < v.size(); i++) cout << v[i] << ' ';
        cout << '\n';
    }

    return 0;
}
