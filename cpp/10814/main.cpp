#include <iostream>
#include <algorithm>

using namespace std;

int N;

struct member{
    short a;
    char n[101];
};

member l[100001];

bool compare(member a, member b){
    return a.a < b.a;
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> l[i].a >> l[i].n;
    }

    stable_sort(l, l + N, compare);

    for(int i = 0; i < N; i++){
        cout << l[i].a << ' ' << l[i].n << '\n';
    }

    return 0;
}
