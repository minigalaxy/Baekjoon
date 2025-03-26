#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int M, N;

int nums[8];
bool visited[8] = { false, };

vector<int> s;

vector<vector<int>> seq;

void bt(int cnt){
    if(cnt == M){
        seq.push_back(s);
        return;
    }

    for(int i = 0; i < N; i++){
        if(!visited[i]){
            s.push_back(nums[i]);
            visited[i] = true;
            bt(cnt + 1);
            s.pop_back();
            visited[i] = false;
        }
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++) cin >> nums[i];

    sort(nums, nums + N);

    bt(0);

    for(vector<int> v: seq){
        for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
        cout << '\n';
    }

    return 0;
}
