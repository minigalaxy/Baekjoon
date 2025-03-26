#include <iostream>

using namespace std;

int preorder[10000];

void postorder(int start, int end){
    if(start > end){
        return;
    }

    if(start == end){
        cout << preorder[start] << '\n';
        return;
    }

    int mid = start + 1;

    while(mid <= end){
        if(preorder[mid] > preorder[start]) break;
        mid++;
    }

    postorder(start + 1, mid - 1);
    postorder(mid, end);

    cout << preorder[start] << '\n';
}

int main()
{
    int tmp = 0;

    while(cin >> preorder[tmp++]){}

    postorder(0, tmp - 2);

    return 0;
}
