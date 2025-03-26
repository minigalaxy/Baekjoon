#include <iostream>

using namespace std;

int N, v;

int nums[100], cnt[201] = { 0, };

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        cnt[t + 100]++;
    }

    cin >> v;

    cout << cnt[v + 100];

    return 0;
}
