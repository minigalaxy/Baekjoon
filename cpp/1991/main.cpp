#include <iostream>

using namespace std;

int N;

char node[26][2];

void preorder(char c){
    if(c == '.') return;

    cout << c;
    preorder(node[c - 'A'][0]);
    preorder(node[c - 'A'][1]);
}

void inorder(char c){
    if(c == '.') return;

    inorder(node[c - 'A'][0]);
    cout << c;
    inorder(node[c - 'A'][1]);
}

void postorder(char c){
    if(c == '.') return;

    postorder(node[c - 'A'][0]);
    postorder(node[c - 'A'][1]);
    cout << c;
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        char root, left, right;
        cin >> root >> left >> right;

        node[root - 'A'][0] = left;
        node[root - 'A'][1] = right;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');

    return 0;
}
