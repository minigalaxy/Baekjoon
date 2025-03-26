#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

long long tree[1000000];

long long binary_search(long long start, long long end){
    if(start >= end) return start;

    long long mid = (start + end) / 2 + 1;

    long long tmp = 0;

    for(int i = 0; i < N; i++){
        if(tree[i] <= mid) break;

        tmp += tree[i] - mid;
    }

    if(tmp < M) return binary_search(start, mid - 1);
    else if(tmp > M) return binary_search(mid, end);
    else return mid;
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++) cin >> tree[i];

    sort(tree, tree + N, greater<long long>());

    cout << binary_search(0, tree[0]);

    return 0;
}
