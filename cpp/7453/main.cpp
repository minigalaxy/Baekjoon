#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

int A[4000], B[4000], C[4000], D[4000];
vector<int> AB;

long long res = 0;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) cin >> A[i] >> B[i] >> C[i] >> D[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            AB.push_back(A[i] + B[j]);
        }
    }

    sort(AB.begin(), AB.end());

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int tmp = C[i] + D[j];
            res += upper_bound(AB.begin(), AB.end(), -tmp) - lower_bound(AB.begin(), AB.end(), -tmp);
        }
    }

    cout << res;

    return 0;
}
