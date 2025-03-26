#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int M, N;

int nums[8];
int nums_cnt[10001] = { 0, };

vector<int> s;

vector<vector<int>> seq;

void bt(int cnt){
    if(cnt == M){
        seq.push_back(s);
        return;
    }

    for(int i = 0; i < N; i++){
        if(nums_cnt[nums[i]] > 0){
            s.push_back(nums[i]);
            nums_cnt[nums[i]]--;
            bt(cnt + 1);
            s.pop_back();
            nums_cnt[nums[i]]++;
        }
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        if(nums_cnt[t] == 0) nums[i] = t;
        else {
            i--;
            N--;
        }

        nums_cnt[t]++;
    }

    sort(nums, nums + N);

    bt(0);

    for(vector<int> v: seq){
        for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
        cout << '\n';
    }

    return 0;
}

