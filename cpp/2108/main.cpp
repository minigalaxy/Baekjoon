#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int N;
vector<int> nums;

int num_count[8001] = { 0, };

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        nums.push_back(t);

        num_count[nums[i] + 4000]++;
    }

    sort(nums.begin(), nums.end());

    double sum = 0;

    for(int i = 0; i < N; i++){
        sum += nums[i];
    }

    cout << round(sum / N) + 0.0 << '\n';

    cout << ((N % 2 == 0) ? (nums[N / 2] + nums[N / 2 + 1]) / 2 : nums[N / 2]) << '\n';

    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    vector<pair<int, int>> freqs;

    for(int n: nums){
        freqs.push_back(make_pair(num_count[n + 4000], -n));
    }

    sort(freqs.begin(), freqs.end());

    if(freqs.size() > 1){
        if(freqs[freqs.size() - 1].first == freqs[freqs.size() - 2].first) cout << -freqs[freqs.size() - 2].second;
        else cout << -freqs.back().second;
    } else {
        cout << -freqs.back().second;
    }

    cout << '\n' << abs(*max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()));

    return 0;
}
