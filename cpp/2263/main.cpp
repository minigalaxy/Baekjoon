#include <iostream>
#include <algorithm>

using namespace std;

int n;

int inorder[100000], postorder[100000];
int idx[100001];

//인오더 : left - root - right
//포스트오더 : left - right - root

int preorder(int i, int l, int r){
    int root = postorder[i];

    int root_idx = idx[root];
    int left_cnt = root_idx - l, right_cnt = r - root_idx;

    cout << root << ' ';

    if(left_cnt > 0) preorder(i - right_cnt - 1, l, root_idx - 1);
    if(right_cnt > 0) preorder(i - 1, root_idx + 1, r);

    return root;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> inorder[i];

        idx[inorder[i]] = i;
    }

    for(int i = 0; i < n; i++) cin >> postorder[i];

    preorder(n - 1, 0, n - 1);

    return 0;
}
